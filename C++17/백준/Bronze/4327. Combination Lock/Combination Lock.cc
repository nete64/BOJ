#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	while (true) {
		int a, b, c, d; cin >> a >> b >> c >> d;

		if (a == 0 && b == 0 && c == 0 && d == 0)
			break;

		int x = (40 + a - b) % 40;
		int y = (40 + c - b) % 40;
		int z = (40 + c - d) % 40;
		cout << 9 * x + 9 * y + 9 * z + 1080 << "\n";
	}
	return 0;
}