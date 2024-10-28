#include <iostream>
#include <algorithm>
using namespace std;

int arr[100002], dp1[100002], dp2[100002];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int N; cin >> N;
    for (int i = 0; i < N; i++)
        cin >> arr[i];
    
    fill(dp1, dp1 + N, 1);
    fill(dp2, dp2 + N, 1);

    for (int i = 1; i < N; i++) {
        if (arr[i - 1] <= arr[i])
            dp1[i] = dp1[i - 1] + 1;
        if (arr[i - 1] >= arr[i])
            dp2[i] = dp2[i - 1] + 1;
    }

    int ans = 0;
    for (int i = 0; i < N; i++)
        ans = max(ans, max(dp1[i], dp2[i]));
    cout << ans;
    return 0;
}