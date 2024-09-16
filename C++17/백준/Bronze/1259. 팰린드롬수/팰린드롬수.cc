#include <iostream>
#include <string>
using namespace std;

bool is_palindrome(string& s)
{
	for (int i = 0; i < s.length(); i++) {
		if (s[i] != s[s.length() - i - 1])
			return false;
	}
	return true;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	while (true) {
		string s; cin >> s;
		if (s[0] == '0') break;

		if (is_palindrome(s))
			cout << "yes\n";
		else
			cout << "no\n";
	}
	return 0;
}