#include <iostream>
using namespace std;

bool b[1002];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    for (int i = 1;; i++) {
        int T = i * (i + 1) / 2;
        if (T > 1000) break;
        b[T] = true;
    }
    
    int N; cin >> N;
    for (int i = 0; i < N; i++) {
        int X; cin >> X;
        bool r = false;
        for (int j = 1; j <= 1000; j++) {
            if (!b[j]) continue;
            for (int k = j; k <= 1000; k++) {
                if (!b[k]) continue;
                int w = X - j - k;
                if (w >= 1 && w <= 1000 && b[w]) {
                    cout << "1\n";
                    r = true;
                    break;
                }
                if (r) break;
            }
            if (r) break;
        }
        if (!r) cout << "0\n";
    }

    return 0;
}