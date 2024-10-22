#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

bool isPrime[10002];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    fill(isPrime, isPrime + 10002, true);
    isPrime[1] = false;
    for (int i = 2; i <= sqrt(10000); i++) {
        if (!isPrime[i])
            continue;

        for (int j = i * i; j <= 10000; j += i)
            isPrime[j] = false;
    }
    int sum = 0, mn = 1e9;
    int M, N; cin >> M >> N;
    for (int i = M; i <= N; i++) {
        if (isPrime[i]) {
            sum += i;
            mn = min(mn, i);
        }
    }
    if (sum == 0)
        cout << "-1";
    else
        cout << sum << "\n" << mn;
    return 0;
}