#include <iostream>
#include <queue>
using namespace std;

bool visited[1000002];
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int A, K; cin >> A >> K;

	queue<pair<int, int> > q;
	q.push({ A, 0 });
	visited[A] = true;
	while (!q.empty()) {
		int x = q.front().first;
		int l = q.front().second;
		q.pop();

		if (x == K) {
			cout << l;
			break;
		}

		if (x + 1 <= 1000000 && !visited[x + 1]) {
			visited[x + 1] = true;
			q.push({ x + 1, l + 1 });
		}
		if (x * 2 <= 1000000 && !visited[x * 2]) {
			visited[x * 2] = true;
			q.push({ x * 2, l + 1 });
		}
	}
	return 0;
}