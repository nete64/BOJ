#include <iostream>
#include <algorithm>
using namespace std;

int arr[1002], dp[1002];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n; cin >> n;
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < i; j++) {
            if (arr[i] > arr[j])
                dp[i] = max(dp[i], dp[j] + 1);
        }
    }

    int ans = 0;
    for (int i = 0; i < n; i++)
        ans = max(ans, dp[i] + 1);
    cout << ans;
    return 0;
}