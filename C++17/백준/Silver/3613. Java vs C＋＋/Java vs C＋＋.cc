#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

bool has_upper(string& s)
{
    for(auto c : s)
        if (isalpha(c) && isupper(c))
            return true;
    return false;
}

bool has_under(string& s)
{
    for(auto c : s)
        if (c == '_')
            return true;
    return false;
}

bool is_under_valid(string& s)
{
    for (int i = 0; i < s.size() - 1; i++)
        if (s[i] == '_' && s[i + 1] == '_')
            return false;

    if (s.back() == '_')
        return false;

    return true;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    string s;
    getline(cin, s);
    
    int category = 0; // 1 Java->C++, 2 C++->Java
    if (isalpha(s[0]) && islower(s[0]) && !has_under(s)) {
        category = 1;
    } else if (isalpha(s[0]) && !has_upper(s) && is_under_valid(s)) {
        category = 2;
    }

    string ans = "";
    if (category == 1) {
        for (int i = 0; i < s.size(); i++) {
            if (isupper(s[i])) {
                ans += "_";
                ans += tolower(s[i]);
            } else {
                ans += s[i];
            }
        }
    }
    else if (category == 2) {
        for (int i = 0; i < s.size() - 1; i++) {
            bool chk = false;
            if (s[i] == '_') {
                if (islower(s[i + 1]))
                    ans += s[i + 1] - 'a' + 'A';
                else
                    ans += s[i + 1];
                i++;
            } else {
                ans += s[i];
            }
        }
        if (s.size() >= 2 && s[s.size() - 2] != '_')
            ans += s.back();
    } else {
        ans = "Error!";
    }
    cout << ans;
}