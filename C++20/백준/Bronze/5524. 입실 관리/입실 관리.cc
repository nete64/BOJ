#include <iostream>
#include <string>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int n; cin >> n;
	for (int i = 0; i < n; i++) {
		string s; cin >> s;
		for (int j = 0; j < s.length(); j++) {
			if (isupper(s[j]))
				cout << (char)(s[j] - 'A' + 'a');
			else
				cout << s[j];
		}
		cout << '\n';
	}
	return 0;
}