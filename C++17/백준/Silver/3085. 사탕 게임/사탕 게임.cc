#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int N, ans;
string s[52];
int dx[] = { 1, 0 };
int dy[] = { 0, 1 };
int check()
{
	int ret = 0;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			char target = s[i][j];

			int cnt = 1;
			int nx = i, ny = j;
			while (true) {
				nx = nx + dx[0];
				ny = ny + dy[0];

				if (nx >= N || ny >= N)
					break;

				if (target == s[nx][ny]) {
					cnt++;
				}
				else {
					break;
				}
			}
			ret = max(ret, cnt);
			cnt = 1;
			nx = i; ny = j;

			while (true) {
				nx = nx + dx[1];
				ny = ny + dy[1];

				if (nx >= N || ny >= N)
					break;

				if (target == s[nx][ny]) {
					cnt++;
				}
				else {
					break;
				}
			}

			ret = max(ret, cnt);
		}
	}
	return ret;
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	cin >> N;
	for (int i = 0; i < N; i++)
		cin >> s[i];

	for (int i = 0; i < N - 1; i++) {
		for (int j = 0; j < N; j++) {
			for (int k = 0; k < 2; k++) {
				int nx = i + dx[k];
				int ny = j + dy[k];

				if (nx >= N || ny >= N)
					continue;

				swap(s[i][j], s[nx][ny]);
				ans = max(ans, check());
				swap(s[i][j], s[nx][ny]);
			}
		}
	}
	cout << ans;

	return 0;
}