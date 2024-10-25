#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int N, M; cin >> N >> M;
    int mn6 = 1e9, mn1 = 1e9;
    for (int i = 0; i < M; i++) {
        int A, B; cin >> A >> B;
        mn6 = min(mn6, A);
        mn1 = min(mn1, B);
    }

    int ans = 1e9;
    for (int i = 0; i <= N; i++) {
        int k = mn1 * (N-(6*i));
        if (k < 0) k = 0;
        ans = min(ans, mn6*i + k);
    }
    cout << ans;
    return 0;
}