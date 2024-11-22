#include <iostream>
#include <algorithm>
using namespace std;

int arr[10009];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int N; cin >> N;
    for (int i = 0; i < N; i++)
        cin >> arr[i];

    int ans = 0;
    for (int i = 0; i < N; i++) {
        if (i - 1 >= 0 && arr[i - 1])
            i--;
            
        if (i + 2 < N && arr[i] && arr[i + 1] && arr[i + 2]) {
            if (arr[i + 1] <= arr[i + 2]) {
                int mn = min({arr[i], arr[i + 1], arr[i + 2]});
                ans += 7 * mn;
                arr[i] -= mn;
                arr[i + 1] -= mn;
                arr[i + 2] -= mn;
            } else {
                ans += 5;
                arr[i]--;
                arr[i + 1]--;
            }
        } else if (i + 1 < N && arr[i] && arr[i + 1]) {
            int mn = min({arr[i], arr[i + 1]});
            ans += 5 * mn;
            arr[i] -= mn;
            arr[i + 1] -= mn;
        } else if (arr[i]) {
            ans += 3 * arr[i];
            arr[i] = 0;
        }
    }
    cout << ans;
    return 0;
}