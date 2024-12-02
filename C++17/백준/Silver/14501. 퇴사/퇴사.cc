#include <iostream>
#include <algorithm>
using namespace std;

int T[20], P[20], dp[20];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    int N; cin >> N;
    for (int i = 0; i < N; i++)
        cin >> T[i] >> P[i];
    
    for (int i = 0; i < N + 1; i++)
        for (int j = i - 1; j >= 0; j--)
            if (i >= j + T[j])
                dp[i] = max(dp[i], dp[j] + P[j]);
    
    cout << dp[N];
    return 0;
}