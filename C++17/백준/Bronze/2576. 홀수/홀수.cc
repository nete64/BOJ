#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int mn = 100, sum = 0;
	for (int i = 0; i < 7; i++) {
		int X; cin >> X;
		if (X % 2 == 1) {
			sum += X;
			mn = min(mn, X);
		}
	}

	if (mn == 100)
		cout << "-1";
	else
		cout << sum << '\n' << mn;
	
	return 0;
}