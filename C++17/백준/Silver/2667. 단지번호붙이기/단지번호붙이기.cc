#include <iostream>
#include <queue>
#include <string>
#include <algorithm>
using namespace std;

const int MAX = 30;
int N, M, total, cnt[1000];
bool visited[MAX][MAX];
string maze[MAX];
int dx[] = {-1,1,0,0};
int dy[] = {0,0,-1,1};
int bfs(int sx, int sy)
{
    int len = 0;
    queue<pair<int, int>> q;
    q.push({sx, sy});
    visited[sx][sy] = true;
    while(!q.empty()) {
        int cx = q.front().first;
        int cy = q.front().second;
        len++;
        q.pop();

        for (int i = 0; i < 4; i++) {
            int nx = cx + dx[i];
            int ny = cy + dy[i];

            if (nx < 0 || nx >= N || ny < 0 || ny >= N)
                continue;
            
            if (!visited[nx][ny] && maze[nx][ny] == '1') {
                q.push({nx, ny});
                visited[nx][ny] = true;
            }
        }
    }
    return len;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> maze[i];
    }

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (!visited[i][j] && maze[i][j] == '1') {
                cnt[total++] = bfs(i, j);
            }
        }
    }
    sort(cnt, cnt + total);
    cout << total << '\n';
    for (int i = 0; i < total; i++)
        cout << cnt[i] << '\n';
    return 0;
}