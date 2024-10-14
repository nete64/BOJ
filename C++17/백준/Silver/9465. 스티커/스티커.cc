#include <iostream>
#include <algorithm>
using namespace std;

int arr[2][100002], dp[100002][3];
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int T; cin >> T;
	while (T--) {
		int n; cin >> n;
		for (int i = 0; i < 2; i++) {
			for (int j = 0; j < n; j++) {
				cin >> arr[i][j];
			}
		}
		for (int i = 1; i <= n; i++) {
			dp[i][0] = max(dp[i - 1][0], max(dp[i - 1][1], dp[i - 1][2]));
			dp[i][1] = max(dp[i - 1][0], dp[i - 1][2]) + arr[0][i - 1];
			dp[i][2] = max(dp[i - 1][0], dp[i - 1][1]) + arr[1][i - 1];
		}
		cout << max(dp[n][0], max(dp[n][1], dp[n][2])) << "\n";
	}

	return 0;
}