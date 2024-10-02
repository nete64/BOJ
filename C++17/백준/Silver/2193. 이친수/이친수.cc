#include <iostream>
using namespace std;
using ull = unsigned long long;

ull dp[92];
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int N; cin >> N;
	dp[1] = 1;
	dp[2] = 1;
	for (int i = 3; i <= 90; i++)
		dp[i] = dp[i - 2] + dp[i - 1];

	cout << dp[N];

	return 0;
}