#include <iostream>
#include <algorithm>
using namespace std;
using ll = long long;
const int MAX = 1000002;

ll dp[MAX];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    dp[1] = 1;
    dp[2] = 2;
    dp[3] = 4;
    for (int i = 4; i < MAX; i++)
        dp[i] = (dp[i - 1] + dp[i - 2] + dp[i - 3]) % 1000000009;

    int T; cin >> T;
    while (T--) {
        int n; cin >> n;
        cout << dp[n] << "\n";
    }
    return 0;
}