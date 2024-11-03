#include <iostream>
using namespace std;

int ans;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	for (int i = 0; i < 4; i++) {
		int X; cin >> X;
		ans += X;
	}

	cout << ans / 60 << "\n" << ans % 60;
	return 0;
}