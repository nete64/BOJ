#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int T; cin >> T;
    for (int i = 0; i < 9; i++) {
        int X; cin >> X;
        T -= X;
    }
    cout << T;
    return 0;
}