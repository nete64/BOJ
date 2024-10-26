#include <iostream>
using namespace std;
using ll = long long;

ll dp[118];
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);

	int n; cin >> n;
	dp[3] = dp[2] = dp[1] = 1;
	for (int i = 4; i <= n; i++)
		dp[i] = dp[i - 1] + dp[i - 3];
	cout << dp[n];
	return 0;
}