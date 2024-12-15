#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s; cin >> s;
    string cur = "";
    int ans = 0;
    for (int i = 0; i < s.size(); i++) {
        if (cur.size() == 0 && s[i] == 'H') cur = "H";
        else if (cur == "H" && s[i] == 'O') cur = "O";
        else if (cur == "O" && s[i] == 'N') cur = "N";
        else if (cur == "N" && s[i] == 'I') {
            cur = "I";
            ans++;
        }
        else if (cur == "I" && s[i] == 'H') cur = "H";
    }
    cout << ans;
    return 0;
}