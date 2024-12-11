#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int N; cin >> N;
    while (N--) {
        string s; cin >> s;
        int a = (s[0] - 'A') * 26 * 26;
        int b = (s[1] - 'A') * 26;
        int c = (s[2] - 'A');
        int d = stoi(s.substr(4, 4));
        if (abs(a+b+c-d) <= 100)
            cout << "nice\n";
        else
            cout << "not nice\n";
    }
    return 0;
}