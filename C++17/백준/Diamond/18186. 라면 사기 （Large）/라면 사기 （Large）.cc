#include <iostream>
#include <algorithm>
using namespace std;
using ll = long long;

ll arr[1000009];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    ll N, B, C; cin >> N >> B >> C;
    for (int i = 0; i < N; i++)
        cin >> arr[i];

    ll ans = 0;
    for (int i = 0; i < N; i++) {
        if (i - 1 >= 0 && arr[i - 1])
            i--;

        if (B > C) {
            if (i + 2 < N && arr[i] && arr[i + 1] && arr[i + 2]) {
                if (arr[i + 1] <= arr[i + 2]) {
                    int mn = min({arr[i], arr[i + 1], arr[i + 2]});
                    ans += (B+2*C) * mn;
                    arr[i] -= mn;
                    arr[i + 1] -= mn;
                    arr[i + 2] -= mn;
                } else {
                    int mn = min({arr[i], arr[i + 1] - arr[i + 2]});
                    ans += mn * (B+C);
                    arr[i] -= mn;
                    arr[i + 1] -= mn;
                }
            } else if (i + 1 < N && arr[i] && arr[i + 1]) {
                int mn = min({arr[i], arr[i + 1]});
                ans += (B+C) * mn;
                arr[i] -= mn;
                arr[i + 1] -= mn;
            } else if (arr[i]) {
                ans += B * arr[i];
                arr[i] = 0;
            }
        } else {
            ans += B * arr[i];
            arr[i] = 0;
        }
    }
    cout << ans;
    return 0;
}