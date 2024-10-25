#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int N, A, B; cin >> N >> A >> B;
    int ans = 0;
    while (true) {
        if (A == B)
            break;

        A = (int)ceil(A / 2.0);
        B = (int)ceil(B / 2.0);
        ans++;
    }
    cout << ans;
    return 0;
}