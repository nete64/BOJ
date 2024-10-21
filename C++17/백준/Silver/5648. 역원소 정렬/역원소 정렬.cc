#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;
using ll = long long;

ll reverse(ll n)
{
    ll ret = 0;
    while (n > 0) {
        ret = (ret + n % 10);
        ret *= 10;
        n /= 10;
    }
    return ret / 10;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    vector<ll> v;
    int n; cin >> n;
    for (int i = 0; i < n; i++) {
        ll x; cin >> x;
        v.push_back(reverse(x));
    }
    sort(v.begin(), v.end());
    for(auto k : v)
        cout << k << "\n";
    return 0;
}