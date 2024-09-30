#include <iostream>
#include <algorithm>
using namespace std;

int a[3];
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	cin >> a[0] >> a[1] >> a[2];
	sort(a, a + 3);
	cout << a[1];
	return 0;
}