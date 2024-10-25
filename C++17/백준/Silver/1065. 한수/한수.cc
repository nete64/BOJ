#include <iostream>
using namespace std;

bool han(int x)
{
    if (x < 10) return true;

    int dif = (x / 10 % 10) - (x % 10);
    int k = x;
    while (k >= 10) {
        int m = (k / 10 % 10) - (k % 10);
        if (m != dif)
            return false;
        k /= 10;
    }
    return true;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int ans = 0;
    int N; cin >> N;
    for (int i = 1; i <= N; i++)
        ans += han(i);
    cout << ans;
    return 0;
}