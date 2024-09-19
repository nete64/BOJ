#include <iostream>
#include <queue>
#include <string>
using namespace std;

const int MAX = 102;
int N, M;
bool visited[MAX][MAX];
string maze[MAX];
int dx[] = {-1,1,0,0};
int dy[] = {0,0,-1,1};
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    cin >> N >> M;
    for (int i = 0; i < N; i++) {
        cin >> maze[i];
    }

    int ans = 0;
    queue<pair<pair<int, int>, int>> q;
    q.push({{0, 0},1});
    visited[0][0] = true;
    while(!q.empty()) {
        int cx = q.front().first.first;
        int cy = q.front().first.second;
        int len = q.front().second;
        q.pop();

        if (cx == N - 1 && cy == M - 1) {
            ans = len;
            break;
        }

        for (int i = 0; i < 4; i++) {
            int nx = cx + dx[i];
            int ny = cy + dy[i];

            if (nx < 0 || nx >= N || ny < 0 || ny >= M)
                continue;
            
            if (!visited[nx][ny] && maze[nx][ny] == '1') {
                q.push({{nx,ny},len+1});
                visited[nx][ny] = true;
            }
        }
    }
    cout << ans;
    return 0;
}