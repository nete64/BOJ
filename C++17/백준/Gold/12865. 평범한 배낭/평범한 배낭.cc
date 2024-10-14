#include <iostream>
#include <algorithm>
using namespace std;

int W[100002], V[1002];
int dp[102][100002];
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int N, K; cin >> N >> K;
	for (int i = 1; i <= N; i++)
		cin >> W[i] >> V[i];
	
	for (int k = 1; k <= K; k++) {
		for (int i = 1; i <= N; i++) {
			if (W[i] > k)
				dp[i][k] = dp[i - 1][k];
			else
				dp[i][k] = max(dp[i - 1][k - W[i]] + V[i], dp[i - 1][k]);
		}
	}
	cout << dp[N][K];

	return 0;
}