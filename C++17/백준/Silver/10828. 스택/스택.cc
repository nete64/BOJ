#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	stack<int> st;
	int N; cin >> N;
	while (N--) {
		string cmd; cin >> cmd;
		if (cmd == "push") {
			int X; cin >> X;
			st.push(X);
		}
		else if (cmd == "pop") {
			if (st.empty())
				cout << "-1\n";
			else {
				cout << st.top() << '\n';
				st.pop();
			}
		}
		else if (cmd == "size") {
			cout << st.size() << '\n';
		}
		else if (cmd == "empty") {
			cout << st.empty() << '\n';
		}
		else if (cmd == "top") {
			if (st.empty())
				cout << "-1\n";
			else
				cout << st.top() << '\n';
		}
	}
	return 0;
}