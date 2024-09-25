#include <iostream>
#include <algorithm>
using namespace std;

int arr[502][502];
int dp[502][502];
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int n; cin >> n;
	for (int i = 1; i <= n; i++)
		for (int j = 1; j <= i; j++)
			cin >> arr[i][j];

	int ans = arr[1][1];
	dp[1][1] = arr[1][1];

	for (int i = 2; i <= n; i++) {
		for (int j = 1; j <= i; j++) {
			dp[i][j] = max(dp[i - 1][j - 1], dp[i - 1][j]) + arr[i][j];
			ans = max(ans, dp[i][j]);
		}
	}
	cout << ans;
	return 0;
}