#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;

const int MAX = 200007;
bool visited[MAX];
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int N, K; cin >> N >> K;

	queue<pair<int, int> > q;
	q.push({ N, 0 });
	visited[N] = true;

	while (!q.empty()) {
		int x = q.front().first;
		int len = q.front().second;
		q.pop();

		if (x == K) {
			cout << len;
			return 0;
		}

		if (2 * x < MAX - 1 && !visited[2 * x]) {
			visited[2 * x] = true;
			q.push({ 2 * x, len });
		}
		if (x - 1 >= 0 && !visited[x - 1]) {
			visited[x - 1] = true;
			q.push({ x - 1, len + 1 });
		}
		if (x + 1 < MAX - 1 && !visited[x + 1]) {
			visited[x + 1] = true;
			q.push({ x + 1, len + 1 });
		}
	}
	return 0;
}