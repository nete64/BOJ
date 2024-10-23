#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int ans = 0;
    int N; cin >> N;
    for(int i = 0; i < N; i++) {
        int X; cin >> X;
        ans += X;
        if (i < N - 1)
            ans += 8;
    }
    cout << ans / 24 << " " << ans % 24;
    return 0;
}