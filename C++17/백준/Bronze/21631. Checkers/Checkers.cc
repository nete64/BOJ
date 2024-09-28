#include <iostream>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	long long a, b;
	cin >> a >> b;
	if (a >= b)
		cout << b;
	else
		cout << a + 1;
	return 0;
}