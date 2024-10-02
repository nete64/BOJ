#include <iostream>
using namespace std;

int dp[1002][1002];
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	dp[0][0] = 1;
	dp[1][0] = 1;
	dp[1][1] = 1;

	for (int i = 2; i <= 1000; i++) {
		for (int j = 0; j <= i; j++) {
			if (j == 0 || j == i)
				dp[i][j] = 1;
			else
				dp[i][j] = (dp[i - 1][j - 1] + dp[i - 1][j]) % 10007;
		}
	}

	int N, K; cin >> N >> K;
	cout << dp[N][K];

	return 0;
}