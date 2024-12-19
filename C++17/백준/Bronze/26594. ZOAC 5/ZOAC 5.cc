#include <iostream>
#include <string>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    string s; cin >> s;

    int ans = 0;
    for (int i = 0; i < s.size(); i++) {
        if (s[0] == s[i]) {
            ans++;
        } else {
            break;
        }
    }
    cout << ans;
    return 0;
}