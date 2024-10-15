#include <iostream>
using namespace std;

int two, five;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int n; cin >> n;
	five = n / 5;
	while (five >= 0) {
		two = (n - 5 * five) / 2;

		if (5 * five + 2 * two == n) {
			cout << five + two;
			return 0;
		}
		five--;
	}
	cout << "-1";
	return 0;
}