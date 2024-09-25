#include <iostream>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int X; cin >> X;
	int a = 1, b = 0;
	while (true) {
		if (a + b > X)
			break;
		a += b;
		b++;
	}
	if (b % 2 == 0)
		cout << X - a + 1 << "/" << a + b - X;
	else
		cout << a + b - X << "/" << X - a + 1;
	return 0;
}