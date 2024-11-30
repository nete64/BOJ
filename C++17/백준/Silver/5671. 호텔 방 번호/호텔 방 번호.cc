#include <iostream>
#include <algorithm>
using namespace std;

int cnt[10];
bool check(int x)
{
    fill(cnt, cnt + 10, 0);
    while (x > 0) {
        cnt[x % 10]++;
        x /= 10;
    }
    for (int i = 0; i <= 9; i++)
        if (cnt[i] >= 2)
            return false;
    return true;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int N, M;
    while (cin >> N >> M) {
        int ans = 0;
        for (int i = N; i <= M; i++) {
            if (check(i))
                ans++;
        }
        cout << ans << "\n";
    }
    return 0;
}