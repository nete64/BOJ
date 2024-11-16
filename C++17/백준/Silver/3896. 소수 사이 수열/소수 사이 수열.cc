#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;
const int MAX = 1e7;

bool isPrime[MAX];
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	fill(isPrime + 2, isPrime + MAX, true);
	for (int i = 2; i <= sqrt(MAX); i++) {
		if (!isPrime[i]) continue;

		for (int j = i * i; j < MAX; j += i)
			isPrime[j] = false;
	}

	int T; cin >> T;
	for (int i = 0; i < T; i++) {
		int k; cin >> k;
		int a = k, b = k;
		while (true) {
			if (isPrime[a]) break;
			a--;
		}
		while (true) {
			if (isPrime[b]) break;
			b++;
		}
		cout << b - a << "\n";
	}
	return 0;
}