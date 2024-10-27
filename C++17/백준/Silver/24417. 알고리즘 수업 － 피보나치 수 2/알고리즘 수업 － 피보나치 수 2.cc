#include <iostream>
using namespace std;
using ll = long long;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int n; cin >> n;
	ll a = 1, b = 1;
	if (n == 1 || n == 2)
		cout << "1 0";
	else {
		for (int i = 3; i <= n; i++) {
			ll t = a % 1000000007;
			a = (a + b) % 1000000007;
			b = t;
		}
		cout << a << " " << (n - 2) % 1000000007;
	}
	return 0;
}