#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int a, b; cin >> a >> b;
	if (a == 0 && b == 0) cout << "Not a moose";
	else if (a == b) cout << "Even " << a * 2;
	else cout << "Odd " << max(a, b) * 2;
	return 0;
}