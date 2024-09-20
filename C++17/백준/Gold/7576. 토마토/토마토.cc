#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;

int arr[1002][1002];
int dx[] = {-1, 1, 0, 0};
int dy[] = {0, 0, -1, 1};
struct Node {
    int x, y, len;
};
bool can_perfect(int x, int y)
{
    for (int i = 1; i <= x; i++) {
        for (int j = 1; j <= y; j++) {
            if (arr[i][j] == 0)
                return false;
        }
    }
    return true;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int M, N; cin >> M >> N;

    queue<Node> q;
    
    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= M; j++) {
            cin >> arr[i][j];

            if (arr[i][j] == 1) {
                Node node {i, j, 0};
                q.push(node);
            }
        }
    }

    int len = 0;
    while(!q.empty()) {
        int cx = q.front().x;
        int cy = q.front().y;
        len = q.front().len;
        q.pop();

        for (int i = 0; i < 4; i++) {
            int nx = cx + dx[i];
            int ny = cy + dy[i];

            if (nx <= 0 || ny <= 0 || nx > N || ny > M)
                continue;
            
            if (arr[nx][ny] == 0) {
                arr[nx][ny] = 1;
                Node next{nx, ny, len + 1};
                q.push(next);
            }
        }
    }

    if (can_perfect(N, M))
        cout << len;
    else
        cout << "-1";

    return 0;
}