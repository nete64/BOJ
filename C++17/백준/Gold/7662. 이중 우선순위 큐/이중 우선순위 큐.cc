#include <iostream>
#include <string>
#include <set>
#include <unordered_map>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int T; cin >> T;
	while (T--) {
		multiset<int> ms;
		unordered_map<int, int> um;

		int k; cin >> k;
		while (k--) {
			string s;
			int n;
			cin >> s >> n;
			if (s[0] == 'I') {
				ms.insert(n);
				if (um.count(n) == 0)
					um[n] = 1;
				else
					um[n]++;
			}
			else if (!ms.empty() && s[0] == 'D') {
				if (n == -1) {
					int w = *ms.begin();
					if (um.count(w) > 0 && um[w] >= 1)
						um[w]--;

					if (um.count(w) > 0 && um[w] <= 0)
						ms.erase(*ms.begin());
				} 
				else {
					int w = *ms.rbegin();
					if (um.count(w) > 0 && um[w] >= 1)
						um[w]--;

					if (um.count(w) > 0 && um[w] <= 0)
						ms.erase(*ms.rbegin());
				}
			}
		}
		if (ms.empty())
			cout << "EMPTY\n";
		else
			cout << *ms.rbegin() << " " << *ms.begin() << "\n";
	}
	return 0;
}