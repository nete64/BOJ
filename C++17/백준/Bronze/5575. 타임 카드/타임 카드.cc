#include <iostream>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	for (int i = 0; i < 3; i++) {
		int a, b, c, d, e, f;
		cin >> a >> b >> c >> d >> e >> f;
		int t = (d * 3600 + e * 60 + f) - (a * 3600 + b * 60 + c);
		cout << t / 3600 << " " << t % 3600 / 60 << " " << t % 60 << "\n";
	}

	return 0;
}