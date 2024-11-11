#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
const int MAX = 1e6 + 2;

bool isPrime[MAX];
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    fill(isPrime, isPrime + MAX, true);

    for (int i = 2; i <= sqrt(MAX); i++) {
        if (!isPrime[i]) continue;

        for (int j = i * i; j <= MAX; j += i) {
            isPrime[j] = false;
        }
    }

    int T; cin >> T;
    while (T--) {
        int ans = 0;
        int N; cin >> N;
        for (int i = 2; i <= N / 2; i++)
            if (isPrime[i] && isPrime[N - i])
                ans++;
        cout << ans << "\n";
    }
    return 0;
}