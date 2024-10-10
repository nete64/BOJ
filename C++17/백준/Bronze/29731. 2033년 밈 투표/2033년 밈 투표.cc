#include <iostream>
#include <string>
#include <set>
using namespace std;

set<string> ss;
bool is_fact(int N)
{
	cin.ignore();
	for (int i = 0; i < N; i++) {
		string s;
		getline(cin, s);
		if (ss.count(s) == 0)
			return false;
	}
	return true;
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	ss.insert("Never gonna give you up");
	ss.insert("Never gonna let you down");
	ss.insert("Never gonna run around and desert you");
	ss.insert("Never gonna make you cry");
	ss.insert("Never gonna say goodbye");
	ss.insert("Never gonna tell a lie and hurt you");
	ss.insert("Never gonna stop");

	int N; cin >> N;
	if (!is_fact(N))
		cout << "Yes";
	else
		cout << "No";
}