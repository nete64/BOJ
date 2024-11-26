#include <iostream>
using namespace std;

int dp[100002];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    dp[1] = 3;
    dp[2] = 7;
    dp[3] = 17;

    int N; cin >> N;
    for (int i = 4; i <= N; i++)
        dp[i] = (dp[i - 2] + 2 * dp[i - 1]) % 9901;

    cout << dp[N];
    return 0;
}