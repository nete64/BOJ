#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int A, B, C, D, P; cin >> A >> B >> C >> D >> P;
    int X = A * P;
    int Y = B;
    if (P > C)
        Y += (P - C) * D;
    cout << min(X, Y);
    return 0;
}