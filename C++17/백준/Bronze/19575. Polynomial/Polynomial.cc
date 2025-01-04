#include <iostream>
using namespace std;
using ll = long long;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    ll N, x; cin >> N >> x;

    ll ans = 0;
    ll a, b; cin >> a >> b;
    ans = a;
    for (int i = 1; i < N + 1; i++) {
        ll a, b; cin >> a >> b;
        ans = (ans * x) % 1000000007;
        ans = (ans + a) % 1000000007;
    }
    cout << ans;
    return 0;
}