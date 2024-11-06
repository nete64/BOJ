#include <iostream>
using namespace std;

int dp[1002];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    dp[1] = dp[3] = dp[4] = 1;
    int N; cin >> N;
    for (int i = 5; i <= N; i++) {
        if (dp[i - 1] == dp[i - 3] && dp[i - 3] == dp[i - 4])
            dp[i] = (dp[i - 1] == 1) ? 0 : 1;
        else
            dp[i] = 1;
    }
    if (dp[N] == 1)
        cout << "SK";
    else
        cout << "CY";
    return 0;
}