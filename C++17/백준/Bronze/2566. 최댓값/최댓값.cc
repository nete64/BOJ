#include <iostream>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int ans = 0;
	int mxi, mxj;
	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9; j++) {
			int x; cin >> x;
			if (x >= ans) {
				ans = x;
				mxi = i;
				mxj = j;
			}
		}
	}
	cout << ans << "\n" << mxi + 1 << " " << mxj + 1;
}