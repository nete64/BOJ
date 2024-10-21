#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;

int N, M, arr[302][302];
bool visited[302][302];
int dx[] = {-1, 1, 0, 0};
int dy[] = {0, 0, -1, 1};
bool is_melted_all()
{
    bool ret = true;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            if (arr[i][j] < 0)
                arr[i][j] = 0;
            if (arr[i][j] > 0)
                ret = false;
        }
    }
    return ret;
}
int bfs(int sx, int sy)
{
    queue<pair<int, int> > q;
    q.push({sx, sy});
    visited[sx][sy] = true;

    while(!q.empty()) {
        int x = q.front().first;
        int y = q.front().second;
        q.pop();

        for (int i = 0; i < 4; i++) {
            int nx = x + dx[i];
            int ny = y + dy[i];

            if (nx < 0 || ny < 0 || nx >= N || ny >= M)
                continue;
            
            if (!visited[nx][ny] && arr[nx][ny] > 0) {
                visited[nx][ny] = true;
                q.push({nx, ny});
            }
        }
    }
    return 1;
}
void update()
{
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            if (arr[i][j] > 0) {
                for (int k = 0; k < 4; k++) {
                    int nx = i + dx[k];
                    int ny = j + dy[k];

                    if (nx < 0 || ny < 0 || nx >= N || ny >= M)
                        continue;
                    
                    if (arr[nx][ny] == 0) {
                        arr[i][j]--;
                        if (arr[i][j] == 0)
                            arr[i][j] = -1;
                    }
                }
            }
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    cin >> N >> M;
    for (int i = 0; i < N; i++)
        for (int j = 0; j < M; j++)
            cin >> arr[i][j];

    int ans = 0;
    while (true) {
        if (is_melted_all()) {
            cout << "0";
            return 0;
        }

        for (int i = 0; i < N; i++)
            fill(visited[i], visited[i] + M, false);
    
        int cnt = 0;
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < M; j++) {
                if (!visited[i][j] && arr[i][j] > 0) {
                    cnt += bfs(i, j);
                }
            }
        }
        if (cnt >= 2) {
            cout << ans;
            return 0;
        }

        update();
        ans++;
    }
    return 0;
}