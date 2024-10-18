#include <iostream>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int T; cin >> T;
	while (T--) {
		int n; cin >> n;
		int k = 0;
		for (int i = 0; i < n; i++) {
			k += (i + 2);
		}
		cout << k * (k + 1) / 2 << "\n";
	}
	return 0;
}