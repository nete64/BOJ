#include <iostream>
#include <string>
using namespace std;

int arr[27];
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int T; cin >> T;
	while (T--) {
		string s; cin >> s;
		int ans = 0;
		int add = 1;
		for (int i = 0; i < s.length(); i++) {
			if (i > 0 && s[i] == 'O' && s[i] == s[i - 1])
				add += 1;
			else
				add = 1;
			if (s[i] == 'O')
				ans += add;
			
		}
		cout << ans << '\n';
	}
	return 0;
}