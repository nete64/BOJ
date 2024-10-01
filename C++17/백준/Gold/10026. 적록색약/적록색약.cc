#include <iostream>
#include <string>
#include <queue>
using namespace std;

string arr1[102], arr2[102];
int N;
int dx[] = { -1, 1, 0, 0 };
int dy[] = { 0, 0, -1, 1 };
int bfs(int sx, int sy, string s[102])
{
	char color = s[sx][sy];

	queue<pair<int, int> > q;
	s[sx][sy] = 'X';
	q.push({ sx, sy });
	while (!q.empty()) {
		int cx = q.front().first;
		int cy = q.front().second;
		q.pop();

		for (int i = 0; i < 4; i++) {
			int nx = cx + dx[i];
			int ny = cy + dy[i];

			if (nx < 0 || ny < 0 || nx >= N || ny >= s[0].length())
				continue;

			if (s[nx][ny] == color) {
				q.push({ nx, ny });
				s[nx][ny] = 'X';
			}
		}
	}
	return 1;
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> arr1[i];
		arr2[i] = arr1[i];
	}

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < arr2[i].length(); j++) {
			if (arr2[i][j] == 'G')
				arr2[i][j] = 'R';
		}
	}

	int ans1 = 0, ans2 = 0;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < arr1[i].length(); j++) {
			if (arr1[i][j] != 'X')
				ans1 += bfs(i, j, arr1);
			if (arr2[i][j] != 'X')
				ans2 += bfs(i, j, arr2);
		}
	}
	cout << ans1 << " " << ans2;

	return 0;
}