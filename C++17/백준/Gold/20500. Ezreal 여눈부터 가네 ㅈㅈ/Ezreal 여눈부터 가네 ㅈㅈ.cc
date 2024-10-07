#include <iostream>
using namespace std;

const int MOD = 1000000007;
int dist[1517][3];
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int N; cin >> N;
	dist[1][0] = 0;
	dist[2][0] = 1;
	dist[2][1] = 1;
	dist[2][2] = 0;

	for (int i = 3; i <= N; i++) {
		dist[i][0] = (dist[i - 1][2] + dist[i - 1][1]) % MOD;
		dist[i][1] = (dist[i - 1][0] + dist[i - 1][2]) % MOD;
		dist[i][2] = (dist[i - 1][0] + dist[i - 1][1]) % MOD;
	}
	cout << dist[N][0];
	return 0;
}