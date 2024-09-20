#include <iostream>
#include <cmath>
using namespace std;

const int MAX = 1000000;
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

	while (true) {
		int n; cin >> n;

		if (n == 0)
			break;

		bool b = false;
		for (int i = n; i >= 2; i--) {
			if (isPrime[i] && isPrime[n - i]) {
				cout << n << " = " << n - i << " + " << i << '\n';
				b = true;
				break;
			}
		}
		if (!b)
			cout << "Goldbach's conjecture is wrong.\n";
	}

	return 0;
}