#include <iostream>
using namespace std;

using ll = long long;

ll power(ll a, ll b, ll m)
{
	if (b == 1)
		return a % m;
	ll val = power(a, b / 2, m);
	val = val * val % m;
	if (b % 2 == 0)
		return val;
	return val * a % m;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	ll A, B, C; cin >> A >> B >> C;
	cout << power(A, B, C);
	return 0;
}