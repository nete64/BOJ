#include <iostream>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int a, b, c, d; cin >> a >> b >> c >> d;
	if (a >= c + 2 && b >= d + 2)
		cout << "1";
	else
		cout << "0";
	return 0;
}