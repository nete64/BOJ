#include <iostream>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int T; cin >> T;
	if (T % 10 != 0)
		cout << "-1";
	else
		cout << T / 300 << " " << (T % 300) / 60 << " " << (T % 60) / 10;
	return 0;
}