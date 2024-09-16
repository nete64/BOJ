#include <iostream>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int a, b; cin >> a >> b;
	int c = a, d = b;
	if (a < b) swap(a, b);

	while (b > 0) {
		int tmp = a;
		a = b;
		b = tmp % b;
	}
	cout << a << "\n" << c*d/a;

	return 0;
}