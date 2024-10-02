#include <iostream>
#include <set>
#include <vector>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	set<int> sa, sb;
	vector<int> v;
	int A, B; cin >> A >> B;
	for (int i = 0; i < A; i++) {
		int X; cin >> X;
		sa.insert(X);
	}
	for (int i = 0; i < B; i++) {
		int X; cin >> X;
		sb.insert(X);
	}

	int ans = 0;
	for (auto& e : sa) {
		if (sb.count(e) == 0) {
			ans++;
			v.push_back(e);
		}
	}
	
	cout << ans << "\n";
	for (auto& e : v)
		cout << e << " ";

	return 0;
}