#include <iostream>
#include <algorithm>
using namespace std;
using ll = long long;

ll arr[17];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    ll n, W; cin >> n >> W;
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    ll c = 0;
    for (int i = 0; i < n; i++) {
        if (i == n - 1)
            break;
            
        if (c > 0 && arr[i] > arr[i + 1]) {
            W += c * arr[i];
            c = 0;
        } else if (W > 0 && arr[i] < arr[i + 1]) {
            ll k = W / arr[i];
            c += W / arr[i];
            W -= k * arr[i];
        }
    }
    cout << W + c * arr[n - 1];
    return 0;
}