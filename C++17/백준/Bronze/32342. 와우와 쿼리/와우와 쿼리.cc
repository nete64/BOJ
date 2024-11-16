#include <iostream>
#include <string>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int T; cin >> T;
	while (T--) {
		string s; cin >> s;

		int cnt = 0;
		int index = 0;
		while ((index = s.find("WOW", index)) != string::npos) {
			cnt++;
			index++;
		}
		cout << cnt << "\n";
	}
	return 0;
}