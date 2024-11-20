#include <cstdio>
#include <deque>
#include <algorithm>
using namespace std;

int arr[103][103];
int dx[] = { -1, 1, 0, 0 };
int dy[] = { 0, 0, -1, 1 };
bool visited[103][103];
struct Node {
    int x, y, k;
};
int main()
{
    int N, M;
    scanf("%d%d", &M, &N);
    for (int i = 1; i <= N; i++)
        for (int j = 1; j <= M; j++)
            scanf("%1d", &arr[i][j]);
    
    deque<Node> q;
    visited[1][1] = true;
    q.push_front({1, 1, 0});
    while (!q.empty()) {
        int x = q.front().x;
        int y = q.front().y;
        int k = q.front().k;
        q.pop_front();

        if (x == N && y == M) {
            printf("%d", k);
            break;
        }

        for (int i = 0; i < 4; i++) {
            int nx = x + dx[i];
            int ny = y + dy[i];

            if (nx <= 0 || ny <= 0 || nx > N || ny > M)
                continue;
            
            if (!visited[nx][ny] && arr[nx][ny] == 0) {
                visited[nx][ny] = true;
                q.push_front({nx, ny, k});
            }
            if (!visited[nx][ny] && arr[nx][ny] == 1) {
                visited[nx][ny] = true;
                q.push_back({nx, ny, k + 1});
            }
        }
    }
    return 0;
}