#include <iostream>
#include <algorithm>
using namespace std;

int dp[5003];
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int N; cin >> N;

	dp[3] = 1;
	dp[5] = 1;

	for (int i = 6; i <= 5000; i++) {
		if (dp[i - 3])
			dp[i] = dp[i - 3] + 1;

		if (dp[i - 5]) {
			if (dp[i]) {
				dp[i] = min(dp[i], dp[i - 5] + 1);
			}
			else {
				dp[i] = dp[i - 5] + 1;
			}
		}
	}
	if (dp[N] == 0)
		cout << "-1";
	else
		cout << dp[N];

	return 0;
}