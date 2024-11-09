#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;

int N, mh, ans;
int arr[102][102];
bool visited[102][102];
int dx[] = { -1, 1, 0, 0 };
int dy[] = { 0, 0, -1, 1 };
void bfs(int sx, int sy, int h)
{
	queue<pair<int, int> > q;
	visited[sx][sy] = true;
	q.push({ sx, sy });
	while (!q.empty()) {
		int x = q.front().first;
		int y = q.front().second;
		q.pop();

		for (int i = 0; i < 4; i++) {
			int nx = x + dx[i];
			int ny = y + dy[i];

			if (nx < 0 || ny < 0 || nx >= N || ny >= N)
				continue;

			if (!visited[nx][ny] && arr[nx][ny] > h) {
				visited[nx][ny] = true;
				q.push({ nx, ny });
			}
		}
	}
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	cin >> N;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			cin >> arr[i][j];
			mh = max(mh, arr[i][j]);
		}
	}

	for (int h = mh; h >= 0; h--) {
		for (int i = 0; i < N; i++)
			fill(visited[i], visited[i] + N, false);

		int cnt = 0;
		for (int i = 0; i < N; i++) {
			for (int j = 0; j < N; j++) {
				if (!visited[i][j] && arr[i][j] > h) {
					bfs(i, j, h);
					cnt++;
				}
			}
		}
		ans = max(ans, cnt);
	}
	cout << ans;
	return 0;
}