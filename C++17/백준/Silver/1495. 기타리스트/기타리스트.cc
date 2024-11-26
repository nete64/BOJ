#include <iostream>
using namespace std;

int arr[52], dp[1002][1002];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int N, S, M; cin >> N >> S >> M;
    for (int i = 1; i <= N; i++)
        cin >> arr[i];

    if (S + arr[1] <= M) dp[1][S + arr[1]] = 1;
    if (S - arr[1] >= 0) dp[1][S - arr[1]] = 1;
    
    for (int i = 1; i <= N - 1; i++) {
        for (int j = 0; j <= M; j++) {
            if (dp[i][j] == 1) {
            if (j - arr[i + 1] >= 0) dp[i+1][j - arr[i + 1]] = 1;
            if (j + arr[i + 1] <= M) dp[i+1][j + arr[i + 1]] = 1;
            }
        }
    }

    for (int i = M; i >= 0; i--) {
        if (dp[N][i] == 1) {
            cout << i;
            return 0;
        }
    }
    cout << "-1";
    return 0;
}