#include <iostream>
#include <string>
using namespace std;

string tb[] = { "000","001","010","011","100","101","110","111" };
string stb[] = { "0", "1", "10", "11", "100", "101", "110", "111" };
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	string s; cin >> s;
	for (int i = 0; i < s.size(); i++) {
		if (i == 0)
			cout << stb[s[i]-'0'];
		else
			cout << tb[s[i]-'0'];
	}
	return 0;
}