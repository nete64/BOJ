#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int a, b; cin >> a >> b;
	cout << abs(((b - 1) / 4) - ((a - 1) / 4)) + abs(((b - 1) % 4) - ((a - 1) % 4));
	return 0;
}