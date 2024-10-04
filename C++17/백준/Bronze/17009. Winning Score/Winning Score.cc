#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    int a, b, c, d, e, f;
    cin >> a >> b >> c >> d >> e >> f;

    int g = 3*a + 2*b + c;
    int h = 3*d + 2*e + f;

    if (g > h)
        cout << "A";
    else if (g < h)
        cout << "B";
    else
        cout << "T";
    
    return 0;
}