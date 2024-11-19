#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int T; cin >> T;

    while (T--) {
        int ans = 0;
        int x1, y1, x2, y2; cin >> x1 >> y1 >> x2 >> y2;
        int n; cin >> n;
        for (int i = 0; i < n; i++) {
            int cx, cy, r; cin >> cx >> cy >> r;
            int d1sq = (cx - x1) * (cx - x1) + (cy - y1) * (cy - y1);
            int d2sq = (cx - x2) * (cx - x2) + (cy - y2) * (cy - y2);
            int rsq = r * r;
            if ( (d1sq <= rsq) != (d2sq <= rsq) )
                ans++;
        }
        cout << ans << "\n";
    }
    return 0;
}