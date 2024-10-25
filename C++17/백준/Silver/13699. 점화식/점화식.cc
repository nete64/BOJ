#include <iostream>
using namespace std;
using ull = unsigned long long;

ull t[37];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n; cin >> n;
    t[0] = 1;
    t[1] = 1;
    t[2] = 2;
    t[3] = 5;
    for (int i = 4; i <= n; i++) {
        for (int j = 0; j <= i - 1; j++) {
            t[i] += t[j] * t[i - j - 1];
        }
    }
    cout << t[n];
    return 0;
}