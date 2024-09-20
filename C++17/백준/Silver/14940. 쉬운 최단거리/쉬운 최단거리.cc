#include <iostream>
#include <queue>
using namespace std;

int ans[1002][1002];
int arr[1002][1002];
int dx[] = {-1, 1, 0, 0};
int dy[] = {0, 0, -1, 1};
struct Node {
    int x, y, len;
};
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n, m; cin >> n >> m;
    int x, y;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            cin >> arr[i][j];
            ans[i][j] = -1;
            if (arr[i][j] == 2) {
                x = i;
                y = j;
            } else if (arr[i][j] == 0) {
                ans[i][j] = 0;
            }
        }
    }

    Node start {x, y, 0};
    queue<Node> q;
    q.push(start);
    ans[x][y] = 0;
    while(!q.empty()) {
        int cx = q.front().x;
        int cy = q.front().y;
        int len = q.front().len;
        q.pop();

        for (int i = 0; i < 4; i++) {
            int nx = cx + dx[i];
            int ny = cy + dy[i];

            if (nx < 0 || ny < 0 || nx > n || ny > m)
                continue;
            
            if (ans[nx][ny] == -1 && arr[nx][ny] == 1) {
                ans[nx][ny] = len + 1;
                Node next{nx, ny, len + 1};
                q.push(next);
            }

        }
    }

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            cout << ans[i][j] << " ";
        }
        cout << '\n';
    }

    return 0;
}