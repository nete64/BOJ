#include <iostream>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int n;
	while (cin >> n) {
		int num = 1;
		int ans = 1;
		while (true) {
			if (num % n == 0) {
				cout << ans << '\n';
				break;
			}
			else {
				num = (num % n) * 10 + 1;
				ans++;
			}
		}
	}

	return 0;
}