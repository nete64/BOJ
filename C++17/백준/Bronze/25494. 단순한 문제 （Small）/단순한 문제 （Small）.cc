#include <iostream>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);

	int T; cin >> T;
	while (T--) {
		int ans = 0;
		int a, b, c; cin >> a >> b >> c;
		for (int x = 1; x <= a; x++) {
			for (int y = 1; y <= b; y++) {
				for (int z = 1; z <= c; z++) {
					if (x % y == y % z && y % z == z % x)
						ans++;
				}
			}
		}
		cout << ans << "\n";
	}
	return 0;
}