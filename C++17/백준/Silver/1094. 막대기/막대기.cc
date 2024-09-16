#include <iostream>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int N; cin >> N;
	int ans = 0;
	while (N > 0) {
		ans += N % 2;
		N /= 2;
	}
	cout << ans;
	return 0;
}