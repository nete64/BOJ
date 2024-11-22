#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int ans = 1, sum = 0;
    int N, M; cin >> N >> M;

    if (N == 0) {
        cout << "0";
        return 0;
    }

    for (int i = 0; i < N; i++) {
        int X; cin >> X;
        sum += X;
        if (sum > M) {
            ans++;
            sum = X;
        }
    }
    cout << ans;
    return 0;
}