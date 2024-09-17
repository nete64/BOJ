#include <iostream>
#include <string>
#include <stack>
#include <algorithm>
using namespace std;

bool is_balanced(string& s)
{
	stack<char> st;

	for (int i = 0; i < s.length(); i++) {
		if (s[i] == '(' || s[i] == '[')
			st.push(s[i]);
		else if (s[i] == ')') {
			if (st.empty() || st.top() != '(') {
				return false;
			}
			else {
				st.pop();
			}
		}
		else if (s[i] == ']') {
			if (st.empty() || st.top() != '[') {
				return false;
			}
			else {
				st.pop();
			}
		}
	}
	if (!st.empty())
		return false;
	return true;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	while (true) {
		string s;
		getline(cin, s);

		if (s[0] == '.')
			break;

		if (is_balanced(s))
			cout << "yes\n";
		else
			cout << "no\n";
	}

	return 0;
}