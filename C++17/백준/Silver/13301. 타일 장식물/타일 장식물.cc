#include <iostream>
using namespace std;
using ll = long long;

ll dp[82];
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	ll N; cin >> N;
	dp[1] = 1;
	dp[2] = 1;
	for (ll i = 3; i <= N; i++)
		dp[i] = dp[i - 2] + dp[i - 1];

	cout << 4 * dp[N] + 2 * dp[N - 1];

	return 0;
}