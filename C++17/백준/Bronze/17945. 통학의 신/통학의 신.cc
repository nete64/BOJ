#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    int A, B; cin >> A >> B;
    
    int b = 2 * A;
    int c = b * b - 4 * B;
    int x1 = (-b + sqrt(b * b - 4 * B)) / 2;
    int x2 = (-b - sqrt(b * b - 4 * B)) / 2;

    if (c == 0)
        cout << x1;
    else
        cout << x2 << " " << x1;

    return 0;
}