#include <iostream>
using namespace std;

long long dp[50];
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	dp[1] = 1;
	dp[2] = 2;

	int N; cin >> N;
	for (int i = 3; i <= 40; i++)
		dp[i] = dp[i - 2] + dp[i - 1];

	cout << dp[N];
	return 0;
}