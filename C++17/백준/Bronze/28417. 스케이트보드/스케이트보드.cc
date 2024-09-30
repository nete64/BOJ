#include <iostream>
#include <algorithm>
using namespace std;

int a[2], b[5];
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int ans = 0;
	int T; cin >> T;
	while (T--) {
		for (int i = 0; i < 2; i++)
			cin >> a[i];
		for (int i = 0; i < 5; i++)
			cin >> b[i];
		sort(a, a + 2);
		sort(b, b + 5);
		ans = max(ans, a[1] + b[3] + b[4]);
	}
	cout << ans;
	return 0;
}