#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int N; cin >> N;
    int ans = 5, k = 5;
    for (int i = 2; i <= N; i++) {
        if (i == 2)
            k += 2;
        else
            k += 3;
        ans = (ans + k) % 45678;
    }
    cout << ans;
    return 0;
}