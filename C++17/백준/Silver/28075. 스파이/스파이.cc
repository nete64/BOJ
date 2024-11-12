#include <iostream>
#include <algorithm>
using namespace std;

int arr[3][3], N, M, ans;
void dfs(int depth, int prev, int x, int y, int sum)
{
    if (prev == y)
        sum += arr[x][y] / 2;
    else
        sum += arr[x][y];

    if (depth == N) {
        if (sum >= M)
            ans++;
        return;
    }
    
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            dfs(depth + 1, y, i, j, sum);
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    cin >> N >> M;
    for (int i = 0; i < 2; i++)
        for (int j = 0; j < 3; j++)
            cin >> arr[i][j];
    
    for (int i = 0; i < 2; i++)
        for (int j = 0; j < 3; j++)
            dfs(1, -1, i, j, 0);

    cout << ans;
    return 0;
}