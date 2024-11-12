#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;

int arr[102][102], N, M, K, ans;
bool visited[102][102];
int dx[] = { -1, 1, 0, 0 };
int dy[] = { 0, 0, -1, 1 };
int bfs(int sx, int sy)
{
    int ret = 0;
    queue<pair<int, int> > q;
    visited[sx][sy] = true;
    q.push({sx, sy});
    while(!q.empty()) {
        int x = q.front().first;
        int y = q.front().second;
        ret++;
        q.pop();

        for (int i = 0; i < 4; i++) {
            int nx = x + dx[i];
            int ny = y + dy[i];

            if (nx <= 0 || ny <= 0 || nx > N || ny > M)
                continue;
            
            if (!visited[nx][ny] && arr[nx][ny] == 1) {
                visited[nx][ny] = true;
                q.push({nx, ny});
            }
        }
    }
    return ret;
}
int main()
{
    cin >> N >> M >> K;
    for (int i = 0; i < K; i++) {
        int r, c; cin >> r >> c;
        arr[r][c] = 1;
    }

    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= M; j++) {
            if (!visited[i][j] && arr[i][j] == 1) {
                visited[i][j] = true;
                ans = max(ans, bfs(i, j));
            }
        }
    }
    cout << ans;
    return 0;
}