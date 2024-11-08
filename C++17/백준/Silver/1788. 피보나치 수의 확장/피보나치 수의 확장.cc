#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;
using ll = long long;

ll dp[1000002];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    dp[1] = dp[2] = 1;
    int n; cin >> n;
    for (int i = 2; i <= abs(n); i++)
        dp[i] = (dp[i - 1] + dp[i - 2]) % 1000000000;

    if (n < 0 && abs(n) % 2 == 0)
        cout << "-1\n" << abs(dp[abs(n)]);
    else if (n == 0)
        cout << "0\n0";
    else
        cout << "1\n" << dp[abs(n)];
}