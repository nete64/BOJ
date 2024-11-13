#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;

int dx[] = {-2, -2, 0, 0, 2, 2};
int dy[] = {-1, 1, -2, 2, -1, 1};
bool visited[202][202];
struct Node {
    int x, y, len;
};
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int N; cin >> N;
    int r1, c1, r2, c2; cin >> r1 >> c1 >> r2 >> c2;

    int ans = -1;

    queue<Node> q;
    q.push({r1, c1, 0});
    visited[r1][c1] = true;
    while(!q.empty()) {
        int x = q.front().x;
        int y = q.front().y;
        int len = q.front().len;
        q.pop();

        if (x == r2 && y == c2) {
            ans = len;
            break;
        }

        for (int i = 0; i < 6; i++) {
            int nx = x + dx[i];
            int ny = y + dy[i];

            if (nx < 0 || ny < 0 || nx >= N || ny >= N)
                continue;
            
            if (!visited[nx][ny]) {
                visited[nx][ny] = true;
                q.push({nx, ny, len + 1});
            }
        }
    }
    cout << ans;
    return 0;
}