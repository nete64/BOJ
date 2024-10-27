#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int dx[] = { -1, 0, 1, 1, 1, 0, -1, -1 };
int dy[] = { -1, -1, -1, 0, 1, 1, 1, 0 };
int arr[1002][1002];
string map[1002];
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int N; cin >> N;
	for (int i = 0; i < N; i++)
		cin >> map[i];

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			if (isdigit(map[i][j])) {
				arr[i][j] = -1;
				
				for (int k = 0; k < 8; k++) {
					int nx = i + dx[k];
					int ny = j + dy[k];

					if (nx < 0 || ny < 0 || nx >= N || ny >= N)
						continue;

					if (map[nx][ny] == '.') {
						arr[nx][ny] += map[i][j] - '0';
					}
				}
			}
		}
	}

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			if (arr[i][j] == -1)
				cout << "*";
			else if (arr[i][j] > 9)
				cout << "M";
			else
				cout << arr[i][j];
		}
		cout << "\n";
	}
	return 0;
}