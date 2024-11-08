#include <iostream>
#include <string>
#include <unordered_set>
using namespace std;

int arr[5][5];
int dx[] = { -1, 1, 0, 0 };
int dy[] = { 0, 0, -1, 1 };
unordered_set<string> us;
void dfs(int depth, int x, int y, string s)
{
	if (x < 0 || y < 0 || x >= 5 || y >= 5) return;

	if (depth == 6) {
		us.insert(s);
		return;
	}

	s.push_back(arr[x][y] + '0');
	for (int i = 0; i < 4; i++) {
		dfs(depth + 1, x + dx[i], y + dy[i], s);
	}
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	for (int i = 0; i < 5; i++)
		for (int j = 0; j < 5; j++)
			cin >> arr[i][j];

	for (int i = 0; i < 5; i++)
		for (int j = 0; j < 5; j++)
			dfs(0, i, j, "");
	cout << us.size();
	return 0;
}