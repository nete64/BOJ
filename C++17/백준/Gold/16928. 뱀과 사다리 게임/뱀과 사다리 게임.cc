#include <iostream>
#include <queue>
using namespace std;

int dx[] = {1,2,3,4,5,6};
int arr[107];
bool visited[107];
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);

    int N, M; cin >> N >> M;
    for (int i = 0; i < N; i++) {
        int x, y; cin >> x >> y;
        arr[x] = y;
    }

    for (int i = 0; i < M; i++) {
        int u, v; cin >> u >> v;
        arr[u] = v;
    }

    queue<pair<int, int> > q;
    q.push({1, 0});
    visited[1] = true;
    while(!q.empty()) {
        int x = q.front().first;
        int len = q.front().second;
        q.pop();

        for (int i = 0; i < 6; i++) {
            int nx = x + dx[i];
            
            if (nx == 100) {
                cout << len + 1;
                return 0;
            }

            if (nx < 0 || nx >= 101)
                continue;
            
            if (arr[nx] != 0)
                nx = arr[nx];

            if (!visited[nx]) {
                q.push({nx, len + 1});
                visited[nx] = true;
            }
        }
    }
	return 0;
}