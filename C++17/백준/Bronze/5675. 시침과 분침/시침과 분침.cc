#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int A;
    while (cin >> A) {
        if (A % 6 == 0)
            cout << "Y\n";
        else
            cout << "N\n";
    }
    return 0;
}