#include <iostream>
#include <string>
using namespace std;

bool c1, c2, c3;
bool is_vowel(char c)
{
	if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
		return true;
	return false;
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	while (true) {
		string s; cin >> s;
		c1 = false;
		c2 = c3 = true;

		if (s == "end")
			break;

		for (int i = 0; i < s.size(); i++) {
			if (is_vowel(s[i]))
				c1 = true;
			
			if (i + 2 < s.size()) {
				bool a = is_vowel(s[i]);
				bool b = is_vowel(s[i + 1]);
				bool c = is_vowel(s[i + 2]);

				if (a == b && b == c)
					c2 = false;
			}

			if (i + 1 < s.size()) {
				if (s[i] == 'e' && s[i + 1] == 'e') {

				}
				else if (s[i] == 'o' && s[i + 1] == 'o') {

				}
				else if (s[i] == s[i + 1])
					c3 = false;
			}
		}

		if (c1 && c2 && c3)
			cout << "<" << s << "> is acceptable.\n";
		else
			cout << "<" << s << "> is not acceptable.\n";
	}

	return 0;
}