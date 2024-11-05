#include <iostream>
#include <cmath>
using namespace std;
const int MAX = 4000002;

bool isPrime[MAX];
bool is_contain(int N, int D)
{
    while (N > 0) {
        if (N % 10 == D)
            return true;
        N /= 10;
    }
    return false;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    fill(isPrime, isPrime + MAX, true);

    for (int i = 2; i < sqrt(MAX); i++) {
        if (!isPrime[i]) continue;

        for (int j = i * i; j < MAX; j += i)
            isPrime[j] = false;
    }

    int ans = 0;
    int A, B, D; cin >> A >> B >> D;
    for (int i = A; i <= B; i++)
        if (isPrime[i])
            ans += is_contain(i, D);
    cout << ans;
    return 0;
}