#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

int Rev(int X)
{
	int A = X;
	int ret = 0;
	int digit = 0;

	while (A > 0) {
		digit++;
		A /= 10;
	}

	for (int i = digit; i >= 0; i--, X /= 10)
		ret += (X % 10) * pow(10, i - 1);

	return ret;
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	
	int X, Y; cin >> X >> Y;
	cout << Rev(Rev(X) + Rev(Y));
	return 0;
}