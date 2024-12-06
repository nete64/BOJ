#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int T; cin >> T;
    while (T--) {
        string s; cin >> s;
        int w = sqrt(s.size());
        for (int i = w - 1; i >= 0; i--) {
            for (int j = i; j < s.size(); j += w) {
                cout << s[j];
            }
        }
        cout << "\n";
    }
    return 0;
}