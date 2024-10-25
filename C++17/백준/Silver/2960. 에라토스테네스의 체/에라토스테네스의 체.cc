#include <iostream>
using namespace std;

bool p[1003];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int ans = 0;
    int N, K; cin >> N >> K;
    for (int i = 2; i <= N; i++) {
        for (int j = i; j <= N; j += i) {
            if (!p[j]) {
                ans++;
                p[j] = true;
            }
            if (ans == K) {
                cout << j;
                return 0;
            }
        }
    }
    return 0;
}