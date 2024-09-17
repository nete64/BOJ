#include <iostream>
#include <string>
#include <stack>
#include <algorithm>
using namespace std;

bool is_balanced(string& s)
{
	stack<char> st;

	for (int i = 0; i < s.length(); i++) {
		if (s[i] == '(')
			st.push(s[i]);
		else if (s[i] == ')') {
			if (st.empty() || st.top() != '(') {
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

	int N; cin >> N;
	while (N--) {
		string s; cin >> s;

		if (is_balanced(s))
			cout << "YES\n";
		else
			cout << "NO\n";
	}

	return 0;
}