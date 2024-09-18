#include <iostream>
using namespace std;

const int MAX = 102;
int T, K, ans;
int com[MAX][MAX];
bool visited[MAX];
void spread(int start)
{
	visited[start] = true;
	
	ans++;
	for (int i = 1; i <= T; i++) {
		if (!visited[i] && com[start][i]) {
			spread(i);
		}
	}
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	cin >> T >> K;
	for (int i = 0; i < K; i++) {
		int a, b; cin >> a >> b;
		com[a][b] = 1;
		com[b][a] = 1;
	}

	spread(1);
	cout << ans - 1;
	return 0;
}