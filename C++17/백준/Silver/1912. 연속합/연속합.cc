#include <iostream>
#include <algorithm>
using namespace std;

int arr[100002], dp[100002];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n; cin >> n;
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    
    dp[0] = arr[0];
    for (int i = 1; i < n; i++) {
        dp[i] = arr[i];
        dp[i] = max(dp[i], dp[i - 1] + arr[i]);
    }
    int ans = -1001;
    for (int i = 0; i < n; i++)
        ans = max(ans, dp[i]);
    cout << ans;
    return 0;
}