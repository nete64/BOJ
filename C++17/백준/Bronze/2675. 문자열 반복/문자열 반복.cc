#include <iostream>
#include <string>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int T; cin >> T;
	while (T--) {
		int k;
		string s;
		cin >> k >> s;
		for (int i = 0; i < s.length(); i++)
		for (int j = 0; j < k; j++) {
			cout << s[i];
		}
		cout << '\n';
	}

	return 0;
}