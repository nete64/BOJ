#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;
using ll = long long;
const int MAX = 1e7 + 9;

int ans;
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

	ll A, B; cin >> A >> B;
	for (ll i = 2; i < MAX; i++) {
		if (isPrime[i]) {
			ll k = i;
			while (k <= B / i) {
				k *= i;
				if (k >= A) ans++;
			}
		}
	}

	cout << ans;
	return 0;
}