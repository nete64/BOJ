#include <iostream>
#include <unordered_map>
using namespace std;
using ll = long long;

ll N, P, Q;
unordered_map<ll, ll> um;
ll dp(ll n)
{
	ll ret;
	if (um.count(n) > 0)
		return um[n];
	ret = dp(n / P) + dp(n / Q);
	um[n] = ret;
	return ret;
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	cin >> N >> P >> Q;
	um[0] = 1;
	if (N == 0)
		cout << "1";
	else
		cout << dp(N / P) + dp(N / Q);

	return 0;
}