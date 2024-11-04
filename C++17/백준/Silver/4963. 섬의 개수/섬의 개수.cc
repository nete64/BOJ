#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;

int w, h;
int dx[] = {-1, 0, 1, 1, 1, 0, -1, -1};
int dy[] = {-1, -1, -1, 0, 1, 1, 1, 0};
int arr[52][52];
bool visited[52][52];
void bfs(int sx, int sy)
{
	queue<pair<int, int> > q;
	visited[sx][sy] = true;
	q.push({sx, sy});
	while(!q.empty()) {
		int x = q.front().first;
		int y = q.front().second;
		q.pop();

		for (int i = 0; i < 8; i++) {
			int nx = x + dx[i];
			int ny = y + dy[i];

			if (nx < 0 || ny < 0 || nx >= w || ny >= h)
				continue;

			if (!visited[nx][ny] && arr[nx][ny] == 1) {
				visited[nx][ny] = true;
				q.push({nx, ny});
			}
		}
	}
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	while (true) {
		cin >> h >> w;

		if (w == 0 && h == 0)
			break;
		
		for (int i = 0; i < w; i++)
			fill(visited[i], visited[i] + h, false);
		
		for (int i = 0; i < w; i++)
			for (int j = 0; j < h; j++)
				cin >> arr[i][j];

		int ans = 0;
		for (int i = 0; i < w; i++) {
			for (int j = 0; j < h; j++) {
				if (!visited[i][j] && arr[i][j] == 1) {
					bfs(i, j);
					ans++;
				}
			}
		}
		cout << ans << "\n";
	}
	return 0;
}