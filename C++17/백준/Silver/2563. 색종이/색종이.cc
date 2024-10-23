#include <iostream>
using namespace std;

int arr[102][102];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int N; cin >> N;
    for (int i = 0; i < N; i++) {
        int x, y; cin >> x >> y;
        for (int j = x; j < x + 10; j++) {
            for (int k = y; k < y + 10; k++) {
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