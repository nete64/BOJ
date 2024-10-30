#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> v;
bool isPrime[500002];
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
    
    fill(isPrime, isPrime + 500002, true);

    isPrime[1] = false;
    for (int i = 2; i <= sqrt(500000); i++) {
        if (!isPrime[i]) continue;

        for (int j = i * i; j <= 500000; j += i) {
            isPrime[j] = false;
        }
    }

    for (int i = 2; i <= 500000; i++)
        if (isPrime[i])
            v.push_back(i);

    int K; cin >> K;
    cout << v[K - 1];
	return 0;
}