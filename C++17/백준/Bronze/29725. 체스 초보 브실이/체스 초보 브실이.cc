#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	unordered_map<int, int> um;
	um[10] = 0;
	um[15] = 1;
	um[13] = 3;
	um[1] = 3;
	um[17] = 5;
	um[16] = 9;

	int ans = 0;
	for (int i = 0; i < 8; i++) {
		string s; cin >> s;

		for (int j = 0; j < s.size(); j++) {
			int sign = 1;
			int num = 0;
			if (islower(s[j])) {
				sign = -1;
				num = s[j] - 'a';
			}
			else if (isupper(s[j]))
				num = s[j] - 'A';

			if (um.count(num) > 0)
				ans += sign * um[num];
		}
	}
	cout << ans;
	return 0;
}