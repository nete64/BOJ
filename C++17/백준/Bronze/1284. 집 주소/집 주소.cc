#include <iostream>
using namespace std;

int len[] = { 4, 2, 3, 3, 3, 3, 3, 3, 3, 3 };
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	while (true) {
		int N; cin >> N;

		if (N == 0)
			break;

		int ans = 0;
		while (N > 0) {
			ans += len[N % 10] + 1;
			N /= 10;
		}
		cout << ans + 1 << "\n";
	}
	return 0;
}