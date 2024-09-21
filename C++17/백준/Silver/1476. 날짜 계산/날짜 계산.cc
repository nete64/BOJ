#include <iostream>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int E, S, M; cin >> E >> S >> M;
	int a = 1, b = 1, c = 1;
	int ans = 1;
	while (true) {
		if (a == E && b == S && c == M)
			break;

		a++, b++, c++, ans++;

		if (a > 15) a = 1;
		if (b > 28) b = 1;
		if (c > 19) c = 1;
	}
	cout << ans;

	return 0;
}