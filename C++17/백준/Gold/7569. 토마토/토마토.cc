#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;

int arr[102][102][102];
int dx[] = {-1, 1, 0, 0, 0, 0};
int dy[] = {0, 0, -1, 1, 0, 0};
int dz[] = {0, 0, 0, 0, -1, 1};
struct Node {
    int x, y, z, len;
};
bool can_perfect(int x, int y, int z)
{
    for (int k = 1; k <= z; k++) {
        for (int i = 1; i <= x; i++) {
            for (int j = 1; j <= y; j++) {
                if (arr[i][j][k] == 0)
                    return false;
            }
        }
    }
    return true;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int M, N, H; cin >> M >> N >> H;

    queue<Node> q;
    
    for (int k = 1; k <= H; k++) {
        for (int i = 1; i <= N; i++) {
            for (int j = 1; j <= M; j++) {
                cin >> arr[i][j][k];

                if (arr[i][j][k] == 1) {
                    Node node {i, j, k, 0};
                    q.push(node);
                }
            }
        }
    }

    int len = 0;
    while(!q.empty()) {
        int cx = q.front().x;
        int cy = q.front().y;
        int cz = q.front().z;
        len = q.front().len;
        q.pop();

        for (int i = 0; i < 6; i++) {
            int nx = cx + dx[i];
            int ny = cy + dy[i];
            int nz = cz + dz[i];

            if (nx <= 0 || ny <= 0 || nz <= 0 || nx > N || ny > M || nz > H)
                continue;
            
            if (arr[nx][ny][nz] == 0) {
                arr[nx][ny][nz] = 1;
                Node next{nx, ny, nz, len + 1};
                q.push(next);
            }
        }
    }

    if (can_perfect(N, M, H))
        cout << len;
    else
        cout << "-1";

    return 0;
}