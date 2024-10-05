#include <iostream>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int n; cin >> n;
	while (n--) {
		int X, Y; cin >> X >> Y;
		if (X >= Y)
			cout << "MMM BRAINS\n";
		else
			cout << "NO BRAINS\n";
	}

	return 0;
}