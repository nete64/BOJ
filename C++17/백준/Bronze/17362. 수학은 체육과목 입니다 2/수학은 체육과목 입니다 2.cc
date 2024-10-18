#include <iostream>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int n; cin >> n;
	if (n % 8 == 0)
		cout << (10 - (n % 8)) % 8;
	else if (n % 8 <= 5)
		cout << n % 8; 
	else
		cout << 10 - (n % 8);
	return 0;
}