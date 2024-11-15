#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int T, S; cin >> T >> S;
    if (T >= 12 && T <= 16 && S == 0)
        cout << "320";
    else
        cout << "280";
    return 0;
}