#include <iostream>
#include <cmath>
#include <unordered_map>
#include <algorithm>
using namespace std;

int arr[2002];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    unordered_map<int, int> um;
    int N; cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
        um[arr[i]]++;
    }

    sort(arr, arr + N);

    int ans = 0;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (i == j) continue;
            int x = arr[i] - arr[j];
            if (x == arr[i]) {
                if (um[x] > 2) {
                    ans++;
                    break;
                }
            } else {
                auto it = lower_bound(arr, arr + N, x);
                if (it != end(arr) && x == *it) {
                    if (arr[j] == x) {
                        if (um[x] > 2)
                            ans++;
                    } else {
                        ans++;
                    }
                    break;
                }
            }
        }
    }
    cout << ans;
}