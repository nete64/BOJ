#include <iostream>
#include <unordered_map>
#include <algorithm>
using namespace std;

string s[102];
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	unordered_map<string, int> um;
	int T; cin >> T;
	for (int i = 0; i < T; i++)
		cin >> s[i];

	int cnt = 0, ans = 0;
	for (int i = 0; i < T; i++) {
		if (cnt - um[s[i]] < um[s[i]])
			ans++;
		cnt++;
		um[s[i]]++;
	}
	cout << ans;
	return 0;
}