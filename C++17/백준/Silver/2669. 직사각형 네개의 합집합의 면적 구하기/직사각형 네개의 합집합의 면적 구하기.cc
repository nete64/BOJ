#include <iostream>
using namespace std;

int arr[102][102];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    for (int i = 0; i < 4; i++) {
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;
        for (int j = x1; j < x2; j++) {
            for (int k = y1; k < y2; k++) {
                arr[j][k]++;
            }
        }
    }

    int ans = 0;
    for (int i = 1; i <= 100; i++)
        for (int j = 1; j <= 100; j++)
            if (arr[i][j] > 0)
                ans++;
    cout << ans;
    return 0;
}