#include <iostream>
using namespace std;

int dp[50];
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	dp[0] = 0;
	dp[1] = 1;
	for (int i = 2; i <= 40; i++)
		dp[i] = dp[i - 2] + dp[i - 1];

	int T; cin >> T;
	for (int i = 0; i < T; i++) {
		int k; cin >> k;
		if (k == 0) {
			cout << "1 0\n";
		}
		else {
			cout << dp[k - 1] << " " << dp[k] << "\n";
		}
	}

	return 0;
}