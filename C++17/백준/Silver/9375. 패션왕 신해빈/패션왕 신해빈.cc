#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int T; cin >> T;
	while (T--) {
		int n; cin >> n;

		unordered_map<string, int> um;
		for (int i = 0; i < n; i++) {
			string a, b; cin >> a >> b;
			if (um.count(b) == 0)
				um[b] = 1;
			else
				um[b]++;
		}

		int ans = 1;
		for (auto& e : um) {
			ans *= (e.second + 1);
		}
		cout << ans - 1 << '\n';
	}

	return 0;
}