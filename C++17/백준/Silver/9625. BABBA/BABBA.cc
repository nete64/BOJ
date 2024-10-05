#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;
using ull = unsigned long long;

ull dp[50];
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int K; cin >> K;
	dp[0] = 0;
	dp[1] = 1;

	for (int i = 2; i <= 45; i++)
		dp[i] = dp[i - 2] + dp[i - 1];

	cout << dp[K - 1] << " " << dp[K];

	return 0;
}