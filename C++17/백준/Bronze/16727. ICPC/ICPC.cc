#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int a, b, c, d; cin >> a >> b >> c >> d;
    if (a + d > b + c)
        cout << "Persepolis";
    else if (a + d < b + c)
        cout << "Esteghlal";
    else {
        if (b < d)
            cout << "Persepolis";
        else if (b > d)
            cout << "Esteghlal";
        else
            cout << "Penalty";
    }
    return 0;
}