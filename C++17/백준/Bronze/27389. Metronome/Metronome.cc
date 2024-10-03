#include <iostream>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int n; cin >> n;
	cout << fixed;
	cout.precision(2);
	cout << n / 4.0;
	return 0;
}