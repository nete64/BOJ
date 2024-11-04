#include <iostream>
#include <algorithm>
using namespace std;
using ll = long long;

ll gcd(ll a, ll b)
{
	if (b == 0) return a;
	return gcd(b, a % b);
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int T; cin >> T;
	for (int i = 0; i < T; i++) {
		ll a, b; cin >> a >> b;
		ll g = a > b ? gcd(a, b) : gcd(b, a);
		cout << a / g * b << "\n";
	}   
	return 0;
}