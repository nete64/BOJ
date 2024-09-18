#include <iostream>
using namespace std;

int dp[50002];
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	dp[0] = 0;
	dp[1] = 1;
	dp[50001] = 4;

	int minn;
	int n; cin >> n;
	for (int i = 2; i <= n; i++) {
		minn = 50001;

		for (int j = 1; j * j <= i; j++) {
			if (dp[i - j * j] < dp[minn])
				minn = i - j * j;
		}

		dp[i] = dp[minn] + 1;
	}
	cout << dp[n];

	return 0;
}