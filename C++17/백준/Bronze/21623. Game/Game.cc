#include <iostream>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int k, n; cin >> k >> n;

	int r = 0, s = n;

	for (int i = 0; i < k; i++) {
		int X; cin >> X;
		if (s - X > 0) s -= X;
		else if (s - X == 0) {
			if (i == k - 1) {
				r++;
				s = 0;
			}
			else {
				r++;
				s = n;
			}
		}
	}
	cout << r << "\n" << s;
	return 0;
}