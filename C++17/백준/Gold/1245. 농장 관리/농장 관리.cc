#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;

int arr[105][105], N, M, ans;
int dx[] = { -1, 1, 0, 0, -1, -1, 1, 1 };
int dy[] = { 0, 0, -1, 1, 1, -1, 1, -1 };
bool visited[105][105];
bool bfs(int sx, int sy)
{
	queue<pair<int, int> > q;
	q.push({ sx, sy });
	visited[sx][sy] = true;

	bool isPeak = true;
	while (!q.empty()) {
		int cx = q.front().first;
		int cy = q.front().second;
		q.pop();

		for (int i = 0; i < 8; i++) {
			int nx = cx + dx[i];
			int ny = cy + dy[i];

			if (nx < 0 || ny < 0 || nx >= N || ny >= M)
				continue;

			if (arr[cx][cy] < arr[nx][ny])
				isPeak = false;

			if (!visited[nx][ny] && arr[cx][cy] == arr[nx][ny]) {
				visited[nx][ny] = true;
				q.push({ nx, ny });
			}
		}
	}
	return isPeak;
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	cin >> N >> M;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			cin >> arr[i][j];
		}
	}

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			if (!visited[i][j]) {
				ans += bfs(i, j);
			}
		}
	}
	cout << ans;
	return 0;
}