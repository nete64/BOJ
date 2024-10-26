#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);

	int ans = 0;

	string s; cin >> s;
	int n; cin >> n;
	for (int i = 0; i < n; i++) {
		string w; cin >> w;
		for (int j = 0; j < w.size(); j++) {
			string t = "";
			for (int k = 0; k < s.size(); k++) {
				int index = (k + j) % w.size();
				t += w[index];
			}
			if (t == s) {
				ans++;
				break;
			}
		}
	}
	cout << ans;
	return 0;
}