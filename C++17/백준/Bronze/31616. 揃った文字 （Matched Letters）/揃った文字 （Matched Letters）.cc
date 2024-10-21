#include <iostream>
#include <string>
#include <unordered_set>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);

	unordered_set<char> us;

	int N; cin >> N;
	string s; cin >> s;
	for (auto& c : s) {
		us.insert(c);
	}
	if (us.size() == 1)
		cout << "Yes";
	else
		cout << "No";
	return 0;
}