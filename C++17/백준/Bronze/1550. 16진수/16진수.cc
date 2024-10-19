#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	string s; cin >> s;
	int ans = 0;
	for (int i = s.size() - 1, k = 0; i >= 0; i--, k++) {
		int d;
		if (isdigit(s[i]))
			d = s[i] - '0';
		else
			d = s[i] - 'A' + 10;
		ans += d * pow(16, k);
	}
	cout << ans;
	return 0;
}