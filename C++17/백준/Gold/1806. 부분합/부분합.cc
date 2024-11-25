#include <iostream>
#include <algorithm>
using namespace std;
using ll = long long;

ll arr[100002];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    ll N, S; cin >> N >> S;
    ll K = 0;
    for (ll i = 1; i <= N; i++) {
        ll X; cin >> X;
        K += X;
        arr[i] = K;
    }
    
    ll lo = 0, hi = 0, sum = 0, len = 1e9;
    while (true) {
        sum = arr[hi] - arr[lo];
        if (lo > hi || hi > N) break;
        if (sum >= S) {
            len = min(len, hi - lo);
            lo++;
        } else if (sum < S) {
            hi++;
        }
    }
    if (len == 1e9)
        cout << "0";
    else
        cout << len;
    return 0;
}