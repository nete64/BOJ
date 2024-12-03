#include <iostream>
using namespace std;

int P[1002], dp[1002];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int N; cin >> N;
    for (int i = 1; i <= N; i++)
        cin >> P[i];
    
    for (int i = 1; i <= N; i++) {
        dp[i] = P[i];

        for (int j = i; j >= 0; j--) {
            dp[i] = max(dp[i], dp[j] + dp[i - j]);
        }
    }
    cout << dp[N];
    return 0;
}