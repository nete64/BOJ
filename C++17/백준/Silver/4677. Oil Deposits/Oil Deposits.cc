#include <iostream>
#include <queue>
#include <string>
#include <algorithm>
using namespace std;

string s[102];
bool visited[102][102];
int m, n;
int dx[] = {-1, -1, -1, 0, 1, 1, 1, 0};
int dy[] = {-1, 0, 1, 1, 1, 0, -1, -1};
int bfs(int sx, int sy)
{
    queue<pair<int, int> > q;
    visited[sx][sy] = true;
    q.push({sx, sy});
    while(!q.empty()) {
        int x = q.front().first;
        int y = q.front().second;
        q.pop();

        for (int i = 0; i < 8; i++) {
            int nx = x + dx[i];
            int ny = y + dy[i];

            if (nx < 0 || ny < 0 || nx >= m || ny >= n)
                continue;
            
            if (!visited[nx][ny] && s[nx][ny] == '@') {
                visited[nx][ny] = true;
                q.push({nx, ny});
            }
        }
    }
    return 1;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    while (true) {
        cin >> m >> n;

        if (m == 0)
            break;
        
        for (int i = 0; i < m; i++)
            cin >> s[i];
        
        for (int i = 0; i < m; i++)
            fill(visited[i], visited[i] + n, false);
        
        int ans = 0;
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (!visited[i][j] && s[i][j] == '@') {
                    ans += bfs(i, j);
                }
            }
        }
        cout << ans << "\n";
    }
    return 0;
}