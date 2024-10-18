#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int a, b; cin >> a >> b;
	int c = (a + b) / 2;
	int d = c - b;
	int e = (int)ceil((a + b) / 2.0);
	if (a == 0 && b == 0)
		cout << "0 0";
	else if (a == b)
		cout << a << " 0";
	else if (c == e && d > 0)
		cout << max(c, d) << " " << min(c, d);
	else
		cout << "-1";
	return 0;
}