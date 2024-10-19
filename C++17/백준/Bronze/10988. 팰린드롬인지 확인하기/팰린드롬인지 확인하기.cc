#include <iostream>
#include <string>
using namespace std;

bool is_pelin(string& s)
{
    for (int i = 0; i < s.size() / 2; i++) {
        if (s[i] != s[s.size() - i - 1])
            return false;
    }
    return true;
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);

    string s; cin >> s;
    if (is_pelin(s))
        cout << "1";
    else
        cout << "0";
	return 0;
}