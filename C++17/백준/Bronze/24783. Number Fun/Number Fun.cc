#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int N; cin >> N;
    while (N--) {
        int a, b, c; cin >> a >> b >> c;
        if (a + b == c || abs(a - b) == c || a * b == c || (double)a / b == (double)c || (double)b / a == (double)c)
            cout << "Possible\n";
        else
            cout << "Impossible\n";
    }
    return 0;
}