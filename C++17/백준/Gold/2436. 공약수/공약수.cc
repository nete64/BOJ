#include <iostream>
#include <numeric>
using namespace std;
using ll = long long;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    ll A, B; cin >> A >> B;
    ll C = B / A;
    ll u = 0, v = 0;
    for (ll i = 1; i * i <= C; i++) {
        if (C % i == 0) {
            ll x = i, y = C / i;

            if (gcd(x, y) == 1) {
                u = x;
                v = y;
            }
        }
    }
    cout << u * A << " " << v * A;
    return 0;
}