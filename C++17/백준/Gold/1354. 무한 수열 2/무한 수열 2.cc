#include <iostream>
#include <unordered_map>
using namespace std;
using ll = long long;

ll N, P, Q, X, Y;
unordered_map<ll, ll> um;
ll dp(ll n)
{
	ll ret;
	if (n <= 0) return 1;
	if (um.count(n) > 0)
		return um[n];
	ret = dp(n / P - X) + dp(n / Q - Y);
	um[n] = ret;
	return ret;
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	cin >> N >> P >> Q >> X >> Y;

	cout << dp(N);

	return 0;
}