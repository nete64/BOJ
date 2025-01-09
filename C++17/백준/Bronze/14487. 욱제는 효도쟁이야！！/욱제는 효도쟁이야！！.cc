#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int n; cin >> n;
	int mx = -1e9, ans = 0;
	for (int i = 0; i < n; i++) {
		int v; cin >> v;
		ans += v;
		mx = max(mx, v);
	}
	cout << ans - mx;
	return 0;
}