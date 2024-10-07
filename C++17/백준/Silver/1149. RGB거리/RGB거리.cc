#include <iostream>
#include <algorithm>
using namespace std;

int arr[3], dp[1001][3];
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int N; cin >> N;
	for (int i = 1; i <= N; i++) {
		cin >> arr[0] >> arr[1] >> arr[2];
		dp[i][0] = min(dp[i - 1][1], dp[i - 1][2]) + arr[0];
		dp[i][1] = min(dp[i - 1][0], dp[i - 1][2]) + arr[1];
		dp[i][2] = min(dp[i - 1][1], dp[i - 1][0]) + arr[2];
	}
	cout << min(dp[N][0], min(dp[N][1], dp[N][2]));
	return 0;
}