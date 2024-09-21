#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;

int n, m;
int arr[502][502];
int dx[] = { -1, 1, 0, 0 };
int dy[] = { 0, 0, -1, 1 };
struct Node {
	int x, y;
};

int bfs(int sx, int sy)
{
	int len = 0;
	queue<Node> q;
	q.push({ sx, sy });
	arr[sx][sy] = -1;

	while (!q.empty()) {
		int cx = q.front().x;
		int cy = q.front().y;
		len++;
		q.pop();

		for (int i = 0; i < 4; i++) {
			int nx = cx + dx[i];
			int ny = cy + dy[i];

			if (nx <= 0 || ny <= 0 || nx > n || ny > m)
				continue;

			if (arr[nx][ny] == 1) {
				arr[nx][ny] = -1;
				q.push({ nx, ny });
			}
		}
	}
	return len;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			cin >> arr[i][j];
		}
	}

	int cnt = 0, widest = 0;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			if (arr[i][j] == 1) {
				widest = max(widest, bfs(i, j));
				cnt++;
			}
		}
	}

	cout << cnt << '\n' << widest;

	return 0;
}