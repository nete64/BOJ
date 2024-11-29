#include <iostream>
using namespace std;

int arr[505][505], ans;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int H, W; cin >> H >> W;
    for (int i = 1; i <= W; i++) {
        int X; cin >> X;
        for (int j = 0; j < X; j++) {
            arr[H - j][i] = 1;
        }
    }

    for (int i = 1; i <= H; i++) {
        int s = 1, e = 1;
        for (int j = 1; j <= W; j++) {
            if (j + 1 > W) continue;
            if (arr[H - i + 1][j] == 0) {
                s = j;
                e = s + 1;
                while (e <= W && arr[H - i + 1][e] == 0) {
                    e++;
                }
                j = e;
            }
            if (e > W || s == 1) continue;
            for (int k = s; k < e; k++) {
                arr[H - i + 1][k] = 2;
            }
        }
    }

    for (int i = 0; i <= H + 1; i++) {
        for (int j = 0; j <= W + 1; j++) {
            if (arr[i][j] == 2)
                ans++;
        }
    }
    cout << ans;
    return 0;
}