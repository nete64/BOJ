#include <iostream>
#include <queue>
using namespace std;

int R, C, sheep, wolf;
string s[252];
bool visited[252][252];
int dx[] = {-1, 1, 0, 0};
int dy[] = {0, 0, -1, 1};
void bfs(int sx, int sy)
{
    int sc = 0, wc = 0;

    queue<pair<int, int> > q;
    visited[sx][sy] = true;
    q.push({sx, sy});
    while(!q.empty()) {
        int x = q.front().first;
        int y = q.front().second;
        q.pop();

        if (s[x][y] == 'v')
            wc++;
        else if (s[x][y] == 'o')
            sc++;

        for (int i = 0; i < 4; i++) {
            int nx = x + dx[i];
            int ny = y + dy[i];

            if (nx < 0 || ny < 0 || nx >= R || ny >= C)
                continue;
            
            if (!visited[nx][ny] && s[nx][ny] != '#') {
                visited[nx][ny] = true;
                q.push({nx, ny});
            }
        }
    }

    if (sc > wc)
        sheep += sc;
    else
        wolf += wc;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    cin >> R >> C;
    for (int i = 0; i < R; i++)
        cin >> s[i];
    
    for (int i = 0; i < R; i++) {
        for (int j = 0; j < C; j++) {
            if (!visited[i][j] && s[i][j] != '#') {
                bfs(i, j);
            }
        }
    }
    cout << sheep << " " << wolf;
    return 0;
}