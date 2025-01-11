#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int T; cin >> T;
	for (int i = 1; i <= T; i++) {
		bool b = false;
		int R; cin >> R;
		for (int j = 0; j < R; j++) {
			string s; cin >> s;
			if ((s[0] == '0' && s[1] == '0') ||
				s[1] == '0' && s[2] == '0') {
				b = true;
			}
		}
		cout << "Case " << i << ": ";
		if (!b) cout << "Standing\n";
		else cout << "Fallen\n";
	}
	return 0;
}