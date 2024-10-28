#include <iostream>
#include <algorithm>
using namespace std;

int arr[32][32];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int N, M; cin >> N >> M;
    for (int i = 0; i < N; i++)
        for (int j = 0; j < M; j++)
            cin >> arr[i][j];

    int ans = 0;
    for (int i = 0; i < M; i++) {
        for (int j = i + 1; j < M; j++) {
            for (int k = j + 1; k < M; k++) {
                int sum = 0;
                for (int l = 0; l < N; l++)
                    sum += max(arr[l][i], max(arr[l][j], arr[l][k]));
                ans = max(ans, sum);
            }
        }
    }
    cout << ans;
    return 0;
}