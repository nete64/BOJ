#include <iostream>
#include <string>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    char lookup[] = {'a','e','i','o','u','A','E','I','O','U'};

    while(true) {
        string s;
        getline(cin, s);
        
        if (s.length() == 1 && s[0] == '#')
            break;
        
        int ans = 0;
        for (int i = 0; i < s.length(); i++) {
            for (int j = 0; j < 10; j++) {
                if (s[i] == lookup[j]) {
                    ans++;
                    break;
                }
            }
        }
        cout << ans << '\n';
    }
    return 0;
}