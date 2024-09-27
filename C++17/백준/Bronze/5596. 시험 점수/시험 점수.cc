#include <iostream>
#include <algorithm>
using namespace std;

int a, b;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	for (int i = 0; i < 4; i++) {
		int n; cin >> n;
		a += n;
	}
	for (int i = 0; i < 4; i++) {
		int n; cin >> n;
		b += n;
	}
	cout << max(a,b);
	return 0;
}