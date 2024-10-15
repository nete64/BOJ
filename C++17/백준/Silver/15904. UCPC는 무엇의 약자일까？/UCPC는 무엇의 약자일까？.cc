#include <iostream>
#include <string>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	string s, ans = "";
	getline(cin, s);

	int t = 0;
	for (int i = 0; i < s.size(); i++) {
		if (t == 0 && s[i] == 'U') {
			ans += s[i];
			t++;
		}
		else if ((t == 1 || t == 3) && s[i] == 'C') {
			ans += s[i];
			t++;
		}
		else if (t == 2 && s[i] == 'P') {
			ans += s[i];
			t++;
		}
	}

	if (ans.size() >= 4 && ans[0] == 'U' && ans[1] == 'C' && ans[2] == 'P' && ans[3] == 'C')
		cout << "I love UCPC";
	else
		cout << "I hate UCPC";
	return 0;
}