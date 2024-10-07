#include <iostream>
#include <algorithm>
using namespace std;

int arr[1001];
int dp[1001], rdp[1001];
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int N; cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> arr[i];
	}

	fill(dp, dp + N, 1);
	fill(rdp, rdp + N, 1);

	for (int i = 0; i < N; i++) {
		for (int j = 0; j <= i; j++) {
			if (arr[i] > arr[j])
				dp[i] = max(dp[i], dp[j] + 1);
		}
	}
	for (int i = N - 1; i >= 0; i--) {
		for (int j = N - 1; j >= i; j--) {
			if (arr[i] > arr[j])
				rdp[i] = max(rdp[i], rdp[j] + 1);
		}
	}
	int ans = 0;
	for (int i = 0; i < N; i++)
		ans = max(ans, dp[i] + rdp[i]);
	cout << ans - 1;
	return 0;
}