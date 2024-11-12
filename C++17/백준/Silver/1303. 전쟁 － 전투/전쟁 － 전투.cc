#include <iostream>
#include <queue>
#include <string>
#include <algorithm>
using namespace std;

string s[102];
int N, M, w, b;
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

            if (nx < 0 || ny < 0 || nx >= M || ny >= N)
                continue;
            
            if (!visited[nx][ny] && s[nx][ny] == s[sx][sy]) {
                visited[nx][ny] = true;
                q.push({nx, ny});
            }
        }
    }
    return ret * ret;
}
int main()
{
    cin >> N >> M;
    for (int i = 0; i < M; i++)
        cin >> s[i];

    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            if (!visited[i][j]) {
                visited[i][j] = true;
                if (s[i][j] == 'W')
                    w += bfs(i, j);
                else
                    b += bfs(i, j);
            }
        }
    }
    cout << w << " " << b;
    return 0;
}