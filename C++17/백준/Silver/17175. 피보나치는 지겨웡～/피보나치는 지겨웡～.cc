#include <iostream>
using namespace std;
using ll = long long;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int n; cin >> n;
    if (n == 0 || n == 1)
        cout << "1";
    else {
        ll a = 1, b = 1;
        for (int i = 2; i <= n; i++) {
            ll t = a % 1000000007;
            a = (1 + a + b) % 1000000007;
            b = t;
        }
        cout << a;
    }
	return 0;
}