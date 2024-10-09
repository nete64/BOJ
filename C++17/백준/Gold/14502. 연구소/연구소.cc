#include <iostream>
#include <queue>
using namespace std;

int N, M, ans, arr[10][10];
bool visited[10][10];
int dx[] = { -1, 1, 0, 0 };
int dy[] = { 0, 0, -1, 1 };
int bfs()
{
	for (int i = 0; i < N; i++)
		fill(visited[i], visited[i] + M, false);

	queue<pair<int, int> > q;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			if (arr[i][j] == 2) {
				q.push({ i, j });
				visited[i][j] = true;
			}
		}
	}

	while (!q.empty()) {
		int x = q.front().first;
		int y = q.front().second;
		q.pop();

		for (int i = 0; i < 4; i++) {
			int nx = x + dx[i];
			int ny = y + dy[i];

			if (nx < 0 || ny < 0 || nx >= N || ny >= M)
				continue;

			if (!visited[nx][ny] && arr[nx][ny] == 0) {
				visited[nx][ny] = true;
				q.push({ nx, ny });
			}
		}
	}

	int ret = 0;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			if (!visited[i][j] && arr[i][j] == 0)
				ret++;
		}
	}
	return ret;
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	
	cin >> N >> M;
	for (int i = 0; i < N; i++)
		for (int j = 0; j < M; j++)
			cin >> arr[i][j];

	for (int i = 0; i < N * M; i++) {
		for (int j = i + 1; j < N * M; j++) {
			for (int k = j + 1; k < N * M; k++) {
				if (i == j || j == k || k == i)
					continue;

				int x1 = i / M; int y1 = i % M;
				int x2 = j / M; int y2 = j % M;
				int x3 = k / M; int y3 = k % M;

				if (arr[x1][y1] != 0 || arr[x2][y2] != 0 || arr[x3][y3] != 0)
					continue;

				arr[x1][y1] = arr[x2][y2] = arr[x3][y3] = 1;

				ans = max(ans, bfs());
				
				arr[x1][y1] = arr[x2][y2] = arr[x3][y3] = 0;
			}
		}
	}
	cout << ans;
	
	return 0;
}