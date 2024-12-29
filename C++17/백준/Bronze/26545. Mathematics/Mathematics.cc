#include <iostream>
using namespace std;

int main()
{
    int T; cin >> T;
    int s = 0;
    while(T--) {
        int X; cin >> X;
        s += X;
    }
    cout << s;
    return 0;
}