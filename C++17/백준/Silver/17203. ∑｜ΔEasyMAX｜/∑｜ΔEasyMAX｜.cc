#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int arr[1002], S[1002];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int N, Q; cin >> N >> Q;
    for (int i = 0; i < N; i++)
        cin >> arr[i];

    for (int i = 0; i < N; i++) {
        if (i == 0) S[i] = 0;
        else S[i] += S[i - 1] + abs((arr[i] - arr[i - 1]));
    }

    for (int i = 0; i < Q; i++) {
        int l, r; cin >> l >> r;
        cout << abs(S[r - 1] - S[l - 1]) << "\n";
    }
    return 0;
}