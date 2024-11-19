#include <iostream>
#include <algorithm>
using namespace std;

int arr[100002];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int N, M; cin >> N >> M;
    for (int i = 0; i < N; i++)
        cin >> arr[i];
    
    sort(arr, arr + N);

    int lo = 0, hi = 0, dif = 0, ans = 2100000000;
    while (true) {
        dif = abs(arr[lo] - arr[hi]);
        if (hi >= N || lo >= N) break;
        if (dif >= M) {
            lo++;
            ans = min(ans, dif);
        } else hi++;
    }
    cout << ans;
    return 0;
}