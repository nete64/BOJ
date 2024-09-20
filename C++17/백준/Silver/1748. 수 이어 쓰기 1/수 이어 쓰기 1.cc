#include <iostream>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int N; cin >> N;
	int tmp = N;
	int digit_cnt = 0;
	while (tmp > 0) {
		digit_cnt++;
		tmp /= 10;
	}

	long long ans = digit_cnt * N;
	int factor = 9;
	for (int i = digit_cnt - 1; i >= 1; i--) {
		ans -= i * factor;
		factor *= 10;
	}
	cout << ans;

	return 0;
}