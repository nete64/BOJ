#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

const int MAX = 1000000;
bool isPrime[MAX + 3];
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	for (int i = 2; i <= MAX; i++)
		isPrime[i] = true;

	for (int i = 2; i <= sqrt(MAX); i++) {
		if (!isPrime[i])
			continue;
		for (int j = i * i; j <= MAX; j += i)
			isPrime[j] = false;
	}

	int N, M; cin >> N >> M;
	for (int i = N; i <= M; i++)
		if (isPrime[i])
			cout << i << '\n';
	return 0;
}