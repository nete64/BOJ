#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    while (true) {
        int a, b, c; cin >> a >> b >> c;
        
        if (a == 0 && b == 0 && c == 0)
            break;
        
        int ans = 1;
        while (true) {
            if (a == c) {
                cout << ans << "\n";
                break;
            }
            else if (b > 0 && a > c) {
                cout << "X\n";
                break;
            }
            else if (b < 0 && a < c) {
                cout << "X\n";
                break;
            }
            a += b;
            ans++;
        }
    }
    return 0;
}