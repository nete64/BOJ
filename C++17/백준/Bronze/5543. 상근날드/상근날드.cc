#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int a, b, c, d, e; cin >> a >> b >> c >> d >> e;
	cout << min({ a, b, c }) + min({ d, e }) - 50;
	return 0;
}