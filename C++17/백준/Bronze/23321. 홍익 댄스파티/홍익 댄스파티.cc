#include <iostream>
#include <string>
using namespace std;

string s[5];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    for (int i = 0; i < 5; i++)
        cin >> s[i];
    
    int w = s[0].size();
    for (int i = 0; i < w; i++) {
        if (s[0][i] == '.' && s[1][i] != '.') {
            s[0][i] = 'o';
            s[1][i] = 'w';
            s[2][i] = 'l';
            s[3][i] = 'n';
            s[4][i] = '.';
        } else if (s[0][i] != '.') {
            s[0][i] = '.';
            s[1][i] = 'o';
            s[2][i] = 'm';
            s[3][i] = 'l';
            s[4][i] = 'n';
        }
    }
    for (int i = 0; i < 5; i++) {
        for (auto c : s[i])
            cout << c;
        cout << "\n";
    }
    return 0;
}