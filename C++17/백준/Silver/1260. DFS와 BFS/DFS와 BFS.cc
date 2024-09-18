#include <iostream>
#include <queue>
#include <memory.h>
using namespace std;

const int MAX = 1007;
int N, M, V, e[MAX][MAX];
bool visited[MAX];
void dfs(int start)
{
	cout << start << " ";
	visited[start] = true;

	for (int i = 1; i <= N; i++) {
		if (!visited[i] && e[start][i]) {
			dfs(i);
		}
	}
}
void bfs(int start)
{
	queue<int> q;

	q.push(start);
	visited[start] = true;

	while (!q.empty()) {
		int front = q.front(); q.pop();
		cout << front << " ";

		for (int i = 1; i <= N; i++) {
			if (!visited[i] && e[front][i]) {
				q.push(i);
				visited[i] = true;
			}
		}
	}
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	cin >> N >> M >> V;
	for (int i = 0; i < M; i++) {
		int a, b; cin >> a >> b;
		e[a][b] = e[b][a] = 1;
	}

	dfs(V);
	cout << '\n';

	memset(visited, 0, sizeof(visited));
	bfs(V);

	return 0;
}