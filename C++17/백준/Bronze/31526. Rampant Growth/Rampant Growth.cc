#include <iostream>
using namespace std;
using ll = long long;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    ll r, c; cin >> r >> c;
    ll ans = r;
    for (int i = 0; i < c - 1; i++)
        ans = ans * (r - 1) % 998244353;
    cout << ans;
    return 0;
}