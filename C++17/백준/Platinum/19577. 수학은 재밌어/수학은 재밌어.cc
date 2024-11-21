#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
using ll = long long;

ll phi(ll n)
{
    ll phi = n;
    for (ll i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            phi /= i;
            phi *= i - 1;

            while (n % i == 0) n /= i;
        }
    }

    if (n > 1) {
        phi /= n;
        phi *= n - 1;
    }
    return phi;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    ll n; cin >> n;
    if (n == 1) {
        cout << "1";
        return 0;
    }

    vector<ll> dv;
    for (ll i = 1; i * i <= n; i++) {
        if (n % i == 0) {
            dv.push_back(i);
            dv.push_back(n / i);
            if (i == n / i)
                dv.pop_back();
        }
    }
    sort(dv.begin(), dv.end());
    for (auto e : dv) {
        ll x = e * phi(e);
        if (x == n) {
            cout << e;
            return 0;
        }
    }
    cout << "-1";
    return 0;
}