#include <iostream>
#include <algorithm>
using namespace std;

int arr[1002];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int N, M; cin >> N >> M;
    for (int i = 0; i < M; i++)
        cin >> arr[i];
    sort(arr, arr + M);
    
    int ans = 0;
    int mxtp = 0;
    for (int i = M - 1; i >= 0; i--) {
        int sum = 0;
        int k = N;
        for (int j = M - 1; j >= 0; j--) {
            if (k <= 0) break;
            if (arr[j] >= arr[i]) {
                sum += arr[i];
                k--;
            }
        }
        if (sum > mxtp) {
            mxtp = sum;
            ans = arr[i];
        }
    }
    cout << ans << " " << mxtp;
    return 0;
}