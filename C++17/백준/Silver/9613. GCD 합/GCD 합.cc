#include <iostream>
#include <vector>
using namespace std;
using ll = long long;

ll GCD(ll a, ll b)
{
    if (b == 0) return a;
    return GCD(b, a % b);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t; cin >> t;
    for (int i = 0; i < t; i++) {
        int n; cin >> n;

        vector<ll> v;
        for (int j = 0; j < n; j++) {
            ll x; cin >> x;
            v.push_back(x);
        }

        ll ans = 0;
        for (int a = 0; a < v.size(); a++)
            for (int b = a + 1; b < v.size(); b++)
                ans += GCD(v[a],v[b]);

        cout << ans << "\n";
    }
    return 0;
}