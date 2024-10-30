#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
using namespace std;
const int MAX = 1e8;

vector<int> v;
bool isPrime[MAX];
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
    
    fill(isPrime, isPrime + MAX, true);

    isPrime[1] = false;
    for (int i = 2; i <= sqrt(MAX); i++) {
        if (!isPrime[i]) continue;

        for (int j = i * i; j <= MAX - 1; j += i) {
            isPrime[j] = false;
        }
    }

    for (int i = 2; i <= MAX - 1; i++)
        if (isPrime[i])
            v.push_back(i);

    int K; cin >> K;
    cout << v[K - 1];
	return 0;
}