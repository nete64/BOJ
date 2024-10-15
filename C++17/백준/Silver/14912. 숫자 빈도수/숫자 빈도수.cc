#include <iostream>
#include <algorithm>
using namespace std;

int get_digit_cnt(int n, int d)
{
	int ret = 0;
	for (int i = 1; i <= n; i++) {
		int x = i;
		while (x > 0) {
			if (x % 10 == d)
				ret++;

			x /= 10;
		}
	}
	return ret;
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int n, d; cin >> n >> d;
	cout << get_digit_cnt(n, d);
	return 0;
}