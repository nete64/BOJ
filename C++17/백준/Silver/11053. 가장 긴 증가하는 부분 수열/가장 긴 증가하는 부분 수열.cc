#include <iostream>
#include <algorithm>
using namespace std;

int arr[1002], dp[1002];
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int N; cin >> N;
	for (int i = 1; i <= N; i++)
		cin >> arr[i];

	fill(dp, dp + 1002, 1);

	int ans = 1;
	for (int i = 2; i <= N; i++) {
		for (int j = 1; j <= i; j++) {
			if (arr[i] > arr[j]) {
				dp[i] = max(dp[i], dp[j] + 1);
				ans = max(ans, dp[i]);
			}
		}
	}
	cout << ans;
	return 0;
}