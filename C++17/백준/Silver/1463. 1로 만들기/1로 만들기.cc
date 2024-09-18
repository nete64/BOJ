#include <iostream>
#include <algorithm>
using namespace std;

const int MAX = 1000002;
int dp[MAX+2];
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	dp[0] = 0;
	dp[1] = 0;
	dp[2] = 1;
	dp[3] = 1;

	for (int i = 4; i <= MAX; i++) {
		dp[i] = MAX + 1;
		if (i % 3 == 0)
			dp[i] = min(dp[i], dp[i / 3] + 1);
		if (i % 2 == 0)
			dp[i] = min(dp[i], dp[i / 2] + 1);
		dp[i] = min(dp[i], dp[i - 1] + 1);
	}

	int N; cin >> N;
	cout << dp[N];

	return 0;
}