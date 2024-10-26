#include <iostream>
using namespace std;

int dp[33][33];
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	dp[0][0] = 1;
	dp[1][0] = 1;
	dp[1][1] = 1;

	for (int i = 2; i <= 31; i++) {
		for (int j = 0; j <= i; j++) {
			if (j == 0 || j == i)
				dp[i][j] = 1;
			else
				dp[i][j] = dp[i - 1][j - 1] + dp[i - 1][j];
		}
	}

	int R, C, W; cin >> R >> C >> W;
	int ans = 0;
	for (int i = 0; i < W; i++) {
		for (int j = 0; j <= i; j++) {
			ans += dp[R - 1 + i][C - 1 + j];
		}
	}
	cout << ans;
	return 0;
}