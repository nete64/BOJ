#include <iostream>
#include <algorithm>
using namespace std;

int GCD(int a, int b)
{
    if (b == 0) return a;
    return GCD(b, a % b);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int T; cin >> T;
    while (T--) {
        int gcd = 0;
        int a, b; cin >> a >> b;
        if (a > b)
            gcd = GCD(a, b);
        else
            gcd = GCD(b, a);

        int lcm = a * b / gcd;
        cout << lcm << " " << gcd << "\n";
    }
    return 0;
}