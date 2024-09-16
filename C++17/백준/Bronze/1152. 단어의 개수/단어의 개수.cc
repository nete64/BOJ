#include <iostream>
#include <string>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	string s;
	getline(cin, s);

	int ans = 0;
	bool begin = false;
	for (int i = 0; i < s.length(); i++) {
		if (isalpha(s[i])) begin = true;
		if (!begin) continue;

		if (begin && (i == s.length() - 1 || s[i] == ' ')) {
			begin = false;
			ans++;
		}
	}
	cout << ans;

	return 0;
}