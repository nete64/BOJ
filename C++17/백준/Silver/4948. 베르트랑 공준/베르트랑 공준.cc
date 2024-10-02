#include <iostream>
#include <cmath>
using namespace std;

const int MAX = 250000;
bool isPrime[MAX + 3];
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	fill(isPrime, isPrime + MAX, true);

	for (int i = 2; i < sqrt(MAX); i++) {
		if (!isPrime[i])
			continue;

		for (int j = i * i; j <= MAX; j += i)
			isPrime[j] = false;
	}

	while (true) {
		int n; cin >> n;

		if (n == 0)
			break;

		int ans = 0;
		for (int i = n + 1; i <= 2 * n; i++)
			if (isPrime[i])
				ans++;

		cout << ans << "\n";
	}

	return 0;
}