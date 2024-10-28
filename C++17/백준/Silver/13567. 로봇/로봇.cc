#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int M, n, x, y, cur;
int dx[] = {1, 0, -1, 0};
int dy[] = {0, -1, 0, 1};
bool is_valid()
{
    if (x < 0 || y < 0 || x >= M || y >= M)
        return false;
    return true;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    cin >> M >> n;

    cur = 0, x = 0, y = 0;
    for (int i = 0; i < n; i++) {
        string S;
        int X;
        cin >> S >> X;
        if (S == "MOVE") {
            x += dx[cur] * X;
            y += dy[cur] * X;
            if (!is_valid()) {
                cout << "-1";
                return 0;
            }
        } else if (S == "TURN") {
            if (X == 0) {
                cur -= 1;
                if (cur < 0) cur = 3;
            } else if (X == 1) {
                cur += 1;
                if (cur > 3) cur = 0;
            }
        }
    }
    cout << x << " " << y;
    return 0;
}