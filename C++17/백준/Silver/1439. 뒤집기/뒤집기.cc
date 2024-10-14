#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int group[3];
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	string s; cin >> s;
	char c = s[0];
	for (int i = 0; i < s.size(); i++) {
		if (c == '0' && s[i] == '1') {
			group[0]++;
		} else if (c == '1' && s[i] == '0') {
			group[1]++;
		}
		c = s[i];
	}
	group[c - '0']++;
	cout << min(group[0], group[1]);
	return 0;
}