#include <iostream>
#include <algorithm>
using namespace std;

int arr[100002];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n; cin >> n;
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    int x; cin >> x;

    sort(arr, arr + n);
    
    int ans = 0, lo = 0, hi = n - 1;
    while(true) {
        if (lo >= hi) break;

        if (arr[lo] + arr[hi] > x) hi--;
        else if (arr[lo] + arr[hi] < x) lo++;
        else {
            ans++;
            hi--;
        }
    }
    cout << ans;
    return 0;
}