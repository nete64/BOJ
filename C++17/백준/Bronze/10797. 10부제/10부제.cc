#include <iostream>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int n, ans = 0;
	cin >> n;
	for (int i = 0; i < 5; i++) {
		int k; cin >> k;
		ans += (k % 10 == n);
	}
	cout << ans;
	return 0;
}