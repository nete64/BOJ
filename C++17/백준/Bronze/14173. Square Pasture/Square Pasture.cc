#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int x1, y1, x2, y2; cin >> x1 >> y1 >> x2 >> y2;
	int x3, y3, x4, y4; cin >> x3 >> y3 >> x4 >> y4;
	int mn1 = 1e9, mx1 = -1e9, mn2 = 1e9, mx2 = -1e9;
	mn1 = min(x1, x3); mx1 = max(x2, x4);
	mn2 = min(y1, y3); mx2 = max(y2, y4);
	int w = max(abs(mn1 - mx1), abs(mn2 - mx2));
	cout << w * w;
	return 0;
}