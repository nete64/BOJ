#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
const int MAX = 1000007;

int len, arr[MAX], dp[MAX], L[MAX];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int N; cin >> N;
    for (int i = 1; i <= N; i++)
        cin >> arr[i];
    
    int last = 0;
    for (int i = 1; i <= N; i++) {
        int pos = lower_bound(L + 1, L + len + 1, arr[i]) - L;
        dp[i] = pos;

        L[dp[i]] = arr[i];
        if (dp[i] > len) {
            last = i;
            len++;
        }
    }
    cout << len << "\n";

    vector<int> v;
    v.push_back(arr[last]);
    for (int i = last; i >= 1; i--) {
        if(arr[last] > arr[i] && dp[i] + 1 == dp[last]) {
            last = i;
            v.push_back(arr[i]);
        }
    }

    for (int i = v.size() - 1; i >= 0; i--)
        cout << v[i] << " ";
    return 0;
}