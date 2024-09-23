#include <iostream>
#include <string>
#include <queue>
#include <algorithm>
using namespace std;

string map[1002];
int R, C;
int time_fire[1002][1002];
int time_jihun[1002][1002];
int dx[] = { -1, 1, 0, 0 };
int dy[] = { 0, 0, -1, 1 };
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	cin >> R >> C;
	for (int i = 0; i < R; i++) {
		fill(time_fire[i], time_fire[i] + C, -1);
		fill(time_jihun[i], time_jihun[i] + C, -1);
	}
	
	queue<pair<int, int> > q1;
	queue<pair<int, int> > q2;
	for (int i = 0; i < R; i++) {
		cin >> map[i];
		for (int j = 0; j < C; j++) {
			if (map[i][j] == 'F') {
				q1.push({ i, j });
				time_fire[i][j] = 0;
			}
			else if (map[i][j] == 'J') {
				q2.push({ i, j });
				time_jihun[i][j] = 0;
			}
		}
	}

	while (!q1.empty()) {
		int cx = q1.front().first;
		int cy = q1.front().second;
		q1.pop();

		for (int i = 0; i < 4; i++) {
			int nx = cx + dx[i];
			int ny = cy + dy[i];

			if (nx < 0 || ny < 0 || nx >= R || ny >= C)
				continue;

			if (time_fire[nx][ny] >= 0 || map[nx][ny] == '#')
				continue;

			time_fire[nx][ny] = time_fire[cx][cy] + 1;
			q1.push({ nx,ny });
		}
	}

	while (!q2.empty()) {
		int cx = q2.front().first;
		int cy = q2.front().second;
		q2.pop();

		for (int i = 0; i < 4; i++) {
			int nx = cx + dx[i];
			int ny = cy + dy[i];

			if (nx < 0 || ny < 0 || nx >= R || ny >= C) {
				cout << time_jihun[cx][cy] + 1;
				return 0;
			}

			if (time_jihun[nx][ny] >= 0 || map[nx][ny] == '#')
				continue;

			if (time_fire[nx][ny] != -1 && time_fire[nx][ny] <= time_jihun[cx][cy] + 1)
				continue;

			time_jihun[nx][ny] = time_jihun[cx][cy] + 1;
			q2.push({ nx,ny });
		}
	}

	cout << "IMPOSSIBLE";

	return 0;
}