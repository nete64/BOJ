#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int N, m, M, T, R; cin >> N >> m >> M >> T >> R;
    
    int ans = 0, ex = 0;
    int cur = m;
    while (true) {
        if (ex == N)
            break;
        if (m + T > M || ex > N) {
            ans = -1;
            break;
        }

        if (cur + T <= M) {
            cur += T;
            ex++;
        } else if (cur - R >= m) {
            cur -= R;
        } else {
            cur = m;
        }
        ans++;
    }
    cout << ans;
    return 0;
}