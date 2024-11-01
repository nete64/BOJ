#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;
using ll = long long;
const int MAX = 1e6 + 2;

bool b[MAX];
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
    
    ll mn, mx; cin >> mn >> mx;
    for (ll i = 2; i * i <= mx; i++) {
        ll sq = i * i;
        for (ll j = mn - (mn % sq); j <= mx; j += sq) {
            if (j >= mn)
                b[j - mn] = true;
        }
    }

    ll ans = 0;
    for (ll i = 0; i <= mx - mn; i++)
        if (!b[i])
            ans++;
    cout << ans;
	return 0;
}