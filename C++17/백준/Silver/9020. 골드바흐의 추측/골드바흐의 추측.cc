#include <iostream>
#include <cmath>
using namespace std;

const int MAX = 20000;
bool isPrime[MAX + 3];
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	for (int i = 2; i < MAX; i++) {
		isPrime[i] = true;
	}

	for (int i = 2; i < sqrt(MAX); i++) {
		if (!isPrime[i])
			continue;

		for (int j = i * i; j <= MAX; j += i)
			isPrime[j] = false;
	}

	int T; cin >> T;
	while (T--) {
		int n; cin >> n;

		for (int i = n / 2; i >= 2; i--) {
			if (isPrime[i] && isPrime[n - i]) {
				cout << i << " " << n - i << '\n';
				break;
			}
		}
	}

	return 0;
}