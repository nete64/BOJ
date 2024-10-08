#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int cnt = 0, ans = 0;
	for (int i = 0; i < 10; i++) {
		int a, b; cin >> a >> b;
		cnt += b - a;
		ans = max(ans, cnt);
	}
	cout << ans;
	return 0;
}