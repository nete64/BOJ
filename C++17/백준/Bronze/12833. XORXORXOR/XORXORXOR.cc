#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int A, B, C; cin >> A >> B >> C;
    if (C % 2 == 1)
        cout << (A ^ B) << "\n";
    else
        cout << ((A ^ B) ^ B) << "\n";
    return 0;
}