#include <iostream>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int T; cin >> T;
	
	while (T--) {
		int d, n, s, p; cin >> d >> n >> s >> p;

		if (d + p * n < n * s)
			cout << "parallelize\n";
		else if (d + p * n > n * s)
			cout << "do not parallelize\n";
		else
			cout << "does not matter\n";
	}

	return 0;
}