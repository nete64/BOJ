#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int L, P; cin >> L >> P;
	for (int i = 0; i < 5; i++) {
		int X; cin >> X;
		cout << X - L * P << " ";
	}
	return 0;
}