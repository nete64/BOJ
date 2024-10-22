#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n, m; cin >> n >> m;
    int ans = m;
    for (int i = 0; i < n; i++) {
        int a, b; cin >> a >> b;
        m += a - b;
        if (m < 0) {
            cout << "0";
            return 0;
        }
        ans = max(ans, m);
    }
    cout << ans;
    return 0;
}