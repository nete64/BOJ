#include <iostream>
using namespace std;
using ll = long long;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int N; cin >> N;
    ll f = 0;
    ll ans = 0;
    for (int i = 0; i < N; i++) {
        int X; cin >> X;
        if (X == 0)
            f--;
        else
            f++;
        ans += f;
    }
    cout << ans;
    return 0;
}