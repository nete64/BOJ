#include <iostream>
using namespace std;
using ll = long long;

ll ans = 0;
void f(ll x, ll y)
{
	if (y == 0) return;
	ans += x / 2;
	ans += x - x / 2;
	f(x / 2, y - 1);
	f(x - x / 2, y - 1);
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	ll X, M; cin >> X >> M;
	ans = X;
	f(X, M);
	cout << ans;
	return 0;
}