#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int A, B; cin >> A >> B;
    if (A >= 3 && B <= 4)
        cout << "TroyMartian\n";
    if (A <= 6 && B >= 2)
        cout << "VladSaturnian\n";
    if (A <= 2 && B <= 3)
        cout << "GraemeMercurian\n";
    return 0;
}