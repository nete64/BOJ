#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int group[27];
bool check(string &s)
{
    fill(group, group + 27, 0);

    for (int i = 0; i < s.size(); i++) {
        if (i + 1 < s.size() && s[i] != s[i+1]) {
            if (group[s[i]-'a'] == 0)
                group[s[i]-'a'] = 1;
            else
                return false;
        }
        else if (group[s[i]-'a'] == 1) {
            group[s[i]-'a'] = -1;
            return false;
        }
    }
    return true;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int ans = 0;
    int N; cin >> N;
    while (N--) {
        string s; cin >> s;
        ans += check(s);
    }
    cout << ans;
    return 0;
}