#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int a1, a0, c, n0;
    cin >> a1 >> a0 >> c >> n0;

    bool ans = true;
    for (int i = n0; i <= 100; i++) {
        if (a1 * i + a0 > c * i) {
            ans = false;
            break;
        }
    }
    cout << ans;
    return 0;
}