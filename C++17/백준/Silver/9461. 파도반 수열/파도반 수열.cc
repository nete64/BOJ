#include <iostream>
using namespace std;

const int MAX = 103;
long long dp[MAX];
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	dp[1] = dp[2] = dp[3] = 1;

	for (int i = 4; i < MAX; i++)
		dp[i] = dp[i - 3] + dp[i - 2];
	
	int T; cin >> T;
	while (T--) {
		int N; cin >> N;
		cout << dp[N] << '\n';
	}

	return 0;
}