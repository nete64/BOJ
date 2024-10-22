#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int N; cin >> N;
    
    int ans = 0;
    int sum = 0, lo = 0, hi = 0;
    while (true) {
        if (sum >= N) sum -= (lo++ + 1);
        else if (hi == N) break;
        else sum += (hi++ + 1);
        if (sum == N) ans++;
    }
    cout << ans;
    return 0;
}