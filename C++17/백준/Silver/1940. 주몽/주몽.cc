#include <iostream>
#include <algorithm>
using namespace std;

int arr[15002];
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
    
    int N, M; cin >> N >> M;
    for (int i = 0; i < N; i++)
        cin >> arr[i];

    sort(arr, arr + N);
    int lo = 0, hi = N - 1, sum = 0, ans = 0;
    while (lo < hi) {
        sum = arr[lo] + arr[hi];
        if (sum > M) hi--;
        else if (sum < M) lo++;
        else {
            ans++;
            hi--;
        }
    }
    cout << ans;
	return 0;
}