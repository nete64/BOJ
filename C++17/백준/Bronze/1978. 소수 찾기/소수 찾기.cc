#include <iostream>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int N, ans = 0;
	cin >> N;
	while (N--) {
		int k; cin >> k;

		int j = 0;
		for (int i = 1; i <= k; i++) {
			if (k % i == 0) {
				j++;
			}
		}
		if (j == 2)
			ans++;
	}
	cout << ans;
	return 0;
}