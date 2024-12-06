#include <iostream>
using namespace std;

int arr[1003][1003];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int R, C, Q; cin >> R >> C >> Q;
    for (int i = 1; i <= R; i++)
        for (int j = 1; j <= C; j++)
            cin >> arr[i][j];

    for (int i = 1; i <= R; i++)
        for (int j = 1; j <= C; j++)
            arr[i][j] = arr[i-1][j] + arr[i][j];
    
    for (int i = 1; i <= C; i++)
        for (int j = 1; j <= R; j++)
            arr[j][i] = arr[j][i-1] + arr[j][i];

    for (int i = 0; i < Q; i++) {
        int x1, y1, x2, y2; cin >> x1 >> y1 >> x2 >> y2;
        cout << (arr[x2][y2] - arr[x2][y1-1] - arr[x1-1][y2] + arr[x1-1][y1-1]) / ((x2-x1+1) * (y2-y1+1)) << "\n";
    }
    return 0;
}