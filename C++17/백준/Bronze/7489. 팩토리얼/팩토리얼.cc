#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        int ans = 1;
        for (int i = 1; i <= n; i++) {
            ans = (ans * i) % 100000;

            while (ans > 0) {
                if (ans % 10 == 0)
                    ans /= 10;
                else
                    break;
            }
        }
        cout << ans % 10 << "\n";
    }
    return 0;
}