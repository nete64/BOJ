#include <iostream>
#include <string>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	string s; cin >> s;
	for (int i = 0; i < s.size(); i++) {
		cout << s[i];
		if (i > 0 && (i + 1) % 10 == 0)
			cout << "\n";
	}
	return 0;
}