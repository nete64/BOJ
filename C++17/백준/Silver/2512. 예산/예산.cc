#include <iostream>
#include <algorithm>
using namespace std;
using ll = long long;

ll arr[10003];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);


    ll lo = 0, hi = 0, mid = 0, sum = 0, ans = 0;
    int N; cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
        hi = max(hi, arr[i]);
    }

    ll K; cin >> K;

    while (lo <= hi) {
        mid = (lo + hi) / 2;
        sum = 0;
        for (int i = 0; i < N; i++) {
            if (arr[i] >= mid)
                sum += mid;
            else
                sum += arr[i];
        }
        if (sum > K) hi = mid - 1;
        else if (sum <= K) {
            lo = mid + 1;
            ans = max(ans, mid);
        }
    }
    cout << ans;
    return 0;
}