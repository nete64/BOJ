#include <iostream>
using namespace std;

string s[9];
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);

	for (int i = 0; i < 8; i++)
		cin >> s[i];

	int ans = 0;
	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 8; j++) {
			if (s[i][j] == 'F') {
				if (i % 2 == 0 && j % 2 == 0)
					ans++;
				else if (i % 2 == 1 && j % 2 == 1)
					ans++;
			}
		}
	}
	cout << ans;
	return 0;
}