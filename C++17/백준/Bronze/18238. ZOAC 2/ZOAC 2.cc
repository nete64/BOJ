#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    int a = 0, b = 0, t = 0;
    string s; cin >> s;
    for (int i = 0; i < s.length(); i++) {
        b = s[i] - 'A';
        t += min(abs(b - a), 26 - abs(b - a));
        a = b;
    }
    cout << t;
    return 0;
}