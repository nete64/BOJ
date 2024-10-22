#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int sum = 0, mn = 1e9;
    int M, N; cin >> M >> N;
    for (int i = ceil(sqrt(M)); i <= sqrt(N); i++) {
        sum += i * i;
        mn = min(mn, sum);
    }
    if (mn == 1e9)
        cout << "-1";
    else
        cout << sum << "\n" << mn;
    return 0;
}