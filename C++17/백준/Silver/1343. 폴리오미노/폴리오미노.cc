#include <iostream>
#include <string>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    string s; cin >> s;
    string ans = "";
    for (int i = 0; i < s.size(); i++) {
        if (i + 1 < s.size() && s[i] == 'X' && s[i + 1] == 'X') {
            if (i + 2 >= s.size() || !(s[i + 2] == 'X' && s[i + 3] == 'X')) {
                ans += "BB";
                i++;
            } else if (i + 2 < s.size() && s[i + 1] == 'X' && s[i + 1] == 'X') {
                ans += "AAAA";
                i += 3;
            }
        } else if (s[i] == '.') {
            ans += ".";
        } else {
            cout << "-1";
            return 0;
        }
    }
    cout << ans;
    return 0;
}