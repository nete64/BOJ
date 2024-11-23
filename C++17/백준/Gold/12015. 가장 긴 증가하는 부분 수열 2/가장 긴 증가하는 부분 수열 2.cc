#include <iostream>
#include <algorithm>
using namespace std;
const int MAX = 1000007;

int ans, arr[MAX], dp[MAX], L[MAX];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int N; cin >> N;
    for (int i = 1; i <= N; i++)
        cin >> arr[i];
    
    for (int i = 1; i <= N; i++) {
        int pos = lower_bound(L + 1, L + ans + 1, arr[i]) - L;
        dp[i] = pos;

        L[dp[i]] = arr[i];
        if (dp[i] > ans)
            ans++;
    }
    cout << ans;
    return 0;
}