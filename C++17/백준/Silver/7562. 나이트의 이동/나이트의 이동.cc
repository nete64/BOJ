#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;

int dx[] = { -2, -1, 1, 2, 2, 1, -1, -2 };
int dy[] = { 1, 2, 2, 1, -1, -2, -2, -1 };
bool visited[302][302];
struct Node {
	int x, y, len;
};
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int T; cin >> T;
	while (T--) {
		int l; cin >> l;
		int sx, sy, ex, ey; cin >> sx >> sy >> ex >> ey;

		for (int i = 0; i < l; i++) {
			for (int j = 0; j < l; j++) {
				visited[i][j] = false;
			}
		}

		queue<Node> q;
		q.push({ sx,sy,0 });
		visited[sx][sy] = true;
		int len = 0;
		while (!q.empty()) {
			int cx = q.front().x;
			int cy = q.front().y;
			len = q.front().len;
			q.pop();

			if (cx == ex && cy == ey)
				break;

			for (int i = 0; i < 8; i++) {
				int nx = cx + dx[i];
				int ny = cy + dy[i];

				if (nx < 0 || ny < 0 || nx >= l || ny >= l)
					continue;

				if (!visited[nx][ny]) {
					visited[nx][ny] = true;
					q.push({ nx, ny, len + 1 });
				}
			}
		}
		cout << len << "\n";
	}
	return 0;
}