#include <iostream>
#include <string>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	string s; cin >> s;
	for (int i = 0; i < s.length(); i++) {
		if (isupper(s[i]))
			cout << (char)(s[i] - 'A' + 'a');
		else
			cout << (char)(s[i] - 'a' + 'A');
	}

	return 0;
}