#include <iostream>
#include <algorithm>
using namespace std;
using ll = long long;

ll arr[103][103], dp[103][103], N;
ll dfs(int x, int y)
{
    if (x == N - 1 && y == N - 1)
        return 1;

    if (dp[x][y] == -1) {
        dp[x][y] = 0;

        if (x + arr[x][y] < N)
            dp[x][y] += dfs(x + arr[x][y], y);
        if (y + arr[x][y] < N)
            dp[x][y] += dfs(x, y + arr[x][y]);
    }
    return dp[x][y];
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    cin >> N;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cin >> arr[i][j];
            dp[i][j] = -1;
        }
    }

    dfs(0, 0);
    cout << dp[0][0];
    return 0;
}