#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int dx[] = {-1, 0, 1, 0};
int dy[] = {0, 1, 0, -1};
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int T; cin >> T;
    while (T--) {
        int dir = 0, x = 0, y = 0;
        int mnx = 0, mny = 0, mxx = 0, mxy = 0;

        string s; cin >> s;
        for (auto& c : s) {
            if (c == 'F') {
                x += dx[dir];
                y += dy[dir];
            } else if (c == 'B') {
                x -= dx[dir];
                y -= dy[dir];
            } else if (c == 'L') {
                dir--;
                if (dir < 0) dir = 3;
            } else if (c == 'R') {
                dir++;
                if (dir > 3) dir = 0;
            }
            mnx = min(mnx, x);
            mny = min(mny, y);
            mxx = max(mxx, x);
            mxy = max(mxy, y);
        }
        cout << (mxx - mnx) * (mxy - mny) << "\n";
    }
    return 0;
}