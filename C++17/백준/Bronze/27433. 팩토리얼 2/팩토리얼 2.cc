#include <iostream>
#include <algorithm>
using namespace std;
using ll = long long;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    ll N; cin >> N;
    if (N == 0)
        cout << "1";
    else {
        ll res = 1;
        while (N > 0) {
            res *= N;
            N--;
        }
        cout << res;
    }
    return 0;
}