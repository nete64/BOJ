#include <iostream>
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
        int A, B; cin >> A >> B;
        int gcd = A > B ? GCD(A, B) : GCD(B, A);
        cout << A * B / gcd << "\n";
    }
    return 0;
}