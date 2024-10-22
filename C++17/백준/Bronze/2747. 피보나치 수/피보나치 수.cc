#include <iostream>
using namespace std;
using ll = long long;

ll dp[47];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n; cin >> n;
    dp[1] = 0;
    dp[2] = 1;
    for (int i = 3; i <= n + 1; i++)
        dp[i] = dp[i-2] + dp[i-1];
    cout << dp[n+1];
    return 0;
}