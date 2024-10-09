#include <iostream>
#include <algorithm>
using namespace std;
const int MAX = 1000000000;

int arr[102], dp[102][10002];
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	for (int i = 0; i < 102; i++)
		fill(dp[i], dp[i] + 10002, MAX);

	int n, k; cin >> n >> k;
	for (int i = 0; i < n; i++)
		cin >> arr[i];

	for (int i = 0; i < n; i++) {
		dp[i][0] = 0;
		for (int j = 0; j <= k; j++) {
			dp[i + 1][j] = min(dp[i + 1][j], dp[i][j]);
			
			int s = j + arr[i];
			if (s <= k)
				dp[i][s] = min(dp[i][s], dp[i][j] + 1);
		}
	}

	if (dp[n - 1][k] == MAX)
		cout << "-1";
	else
		cout << dp[n - 1][k];

	return 0;
}