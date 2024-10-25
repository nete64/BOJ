#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int N; cin >> N;
    int h = 0;
    bool r = false;
    while (N--) {
        string s; int X; cin >> s >> X;
        bool isHG = (s[0]=='H');
        if (!r) h += 1;
        else h -= 1;
        if (h <= 0) h = 12;
        if (h >= 13) h = 1;
        if (isHG && h != X)
            r = !r;
        cout << h << " ";
        if (h == X && !isHG)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}