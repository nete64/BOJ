#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    string s; getline(cin, s);
    int j = -1, k = -1;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '(')
            j = i + 1;
        else if (s[i] == ')')
            k = i - 1;
    }
    if (j == -1)
        cout << s << "\n-";
    else
        cout << s.substr(0, j - 2) << "\n" << s.substr(j, k - j + 1);
    return 0;
}