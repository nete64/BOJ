#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>
using namespace std;

int arr[102][102], M, N, K, cnt;
int dx[] = { -1, 1, 0, 0 };
int dy[] = { 0, 0, -1, 1 };
bool visited[102][102];
vector<int> area;
struct Node {
    int x, y;
};
int bfs(int sx, int sy)
{
    int ret = 0;
    queue<Node> q;
    q.push({sx, sy});
    visited[sx][sy] = true;
    while(!q.empty()) {
        int x = q.front().x;
        int y = q.front().y;
        ret++;
        q.pop();

        for (int i = 0; i < 4; i++) {
            int nx = x + dx[i];
            int ny = y + dy[i];

            if (nx < 0 || ny < 0 || nx >= M || ny >= N)
                continue;
            
            if (!visited[nx][ny] && arr[nx][ny] == 0) {
                visited[nx][ny] = true;
                q.push({nx, ny});
            }
        }
    }
    return ret;
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
    
    cin >> M >> N >> K;
    for (int i = 0; i < K; i++) {
        int a, b, c, d; cin >> a >> b >> c >> d;
        for (int j = a; j < c; j++) {
            for (int k = b; k < d; k++) {
                arr[M-k-1][j] = 1;
            }
        }
    }

    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            if (!visited[i][j] && arr[i][j] == 0) {
                area.push_back(bfs(i, j));
                cnt++;
            }
        }
    }
    sort(area.begin(), area.end());
    cout << cnt << "\n";
    for(auto& e : area)
        cout << e << " ";
	return 0;
}