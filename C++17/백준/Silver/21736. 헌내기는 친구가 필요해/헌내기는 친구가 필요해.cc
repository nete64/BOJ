#include <iostream>
#include <queue>
#include <string>
#include <algorithm>
using namespace std;

const int MAX = 606;
string campus[MAX];
int N, M, ans;
bool visited[MAX][MAX];
int dx[] = {-1, 1, 0, 0};
int dy[] = {0, 0, -1, 1};
void bfs(int sx, int sy)
{
    queue<pair<int, int>> q;
    q.push({sx, sy});
    visited[sx][sy] = true;

    while(!q.empty()) {
        int cx = q.front().first;
        int cy = q.front().second;
        q.pop();

        for (int i = 0; i < 4; i++) {
            int nx = cx + dx[i];
            int ny = cy + dy[i];

            if (nx < 0 || ny < 0 || nx >= N || ny >= M)
                continue;
            
            if (!visited[nx][ny]) {
                if (campus[nx][ny] == 'P') {
                    ans++;
                    q.push({nx,ny});
                }
                else if (campus[nx][ny] == 'O')
                    q.push({nx,ny});
                
                visited[nx][ny] = true;
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
        cin >> campus[i];
    
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            if (campus[i][j] == 'I')
                bfs(i, j);
        }
    }
    if (ans == 0)
        cout << "TT";
    else
        cout << ans;

    return 0;
}