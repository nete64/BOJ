#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int arr[3][7];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int N, K; cin >> N >> K;
    for (int i = 0; i < N; i++) {
        int S, Y; cin >> S >> Y;
        arr[S][Y]++;
    }

    int ans = 0;
    for (int i = 0; i <= 1; i++) {
        for (int j = 1; j <= 6; j++) {
            ans += ceil((float)arr[i][j] / K);
        }
    }
    cout << ans;
    return 0;
}