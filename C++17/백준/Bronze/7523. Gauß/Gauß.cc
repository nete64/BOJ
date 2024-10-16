#include <iostream>
using namespace std;
using ll = long long;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int T; cin >> T;
	for (int i = 1; i <= T; i++) {
		ll n, m; cin >> n >> m;
		cout << fixed;
		cout.precision(0);
		cout << "Scenario #" << i << ":\n" << (m - n + 1) * (n + m) / 2 << "\n\n";
	}
	return 0;
}