#include <iostream>
#include <algorithm>
using namespace std;

int arr[1002], dp[1002];
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int N; cin >> N;
	for (int i = 0; i < N; i++)
		cin >> arr[i];
	
	sort(arr, arr + N);

	dp[0] = arr[0];
	for (int i = 1; i < N; i++) {
		dp[i] = dp[i - 1] + arr[i];
	}

	int ans = 0;
	for (int i = 0; i < N; i++) {
		ans += dp[i];
	}

	cout << ans;

	return 0;
}