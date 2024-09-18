#include <iostream>
using namespace std;

const int MAX = 303;
int arr[MAX], dp[MAX][2];
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int T; cin >> T;
	for (int i = 1; i <= T; i++)
		cin >> arr[i];

	// 0 : 건너 뜀
	// 1 : 연속으로
	dp[1][0] = arr[1];
	dp[1][1] = 0;
	dp[2][0] = arr[2];
	dp[2][1] = arr[1] + arr[2];

	for (int i = 3; i < MAX; i++) {
		dp[i][0] = max(dp[i - 2][0], dp[i - 2][1]) + arr[i];
		dp[i][1] = dp[i - 1][0] + arr[i];
	}
	
	cout << max(dp[T][0], dp[T][1]);

	return 0;
}