#include <iostream>
#include <string>
#include <queue>
#include <algorithm>
using namespace std;

string map[1002];
int R, C;
int time1[1002][1002];
int time2[1002][1002];
int dx[] = { -1, 1, 0, 0 };
int dy[] = { 0, 0, -1, 1 };
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int T; cin >> T;
	while (T--) {
		cin >> C >> R;
		for (int i = 0; i < R; i++) {
			fill(time1[i], time1[i] + C, -1);
			fill(time2[i], time2[i] + C, -1);
		}

		queue<pair<int, int> > q1;
		queue<pair<int, int> > q2;
		for (int i = 0; i < R; i++) {
			cin >> map[i];
			for (int j = 0; j < C; j++) {
				if (map[i][j] == '*') {
					q1.push({ i, j });
					time1[i][j] = 0;
				}
				else if (map[i][j] == '@') {
					q2.push({ i, j });
					time2[i][j] = 0;
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

				if (time1[nx][ny] >= 0 || map[nx][ny] == '#')
					continue;

				time1[nx][ny] = time1[cx][cy] + 1;
				q1.push({ nx,ny });
			}
		}

		bool isFound = false;

		while (!q2.empty()) {
			int cx = q2.front().first;
			int cy = q2.front().second;
			q2.pop();
			
			for (int i = 0; i < 4; i++) {
				int nx = cx + dx[i];
				int ny = cy + dy[i];

				if (nx < 0 || ny < 0 || nx >= R || ny >= C) {
					cout << time2[cx][cy] + 1 << '\n';
					isFound = true;
					break;
				}

				if (time2[nx][ny] >= 0 || map[nx][ny] == '#')
					continue;

				if (time1[nx][ny] != -1 && time1[nx][ny] <= time2[cx][cy] + 1)
					continue;

				time2[nx][ny] = time2[cx][cy] + 1;
				q2.push({ nx,ny });
			}

			if (isFound)
				break;
		}

		if (!isFound)
			cout << "IMPOSSIBLE\n";
	}

	return 0;
}