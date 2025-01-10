#include <iostream>
#include <algorithm>
using namespace std;

int w[50];
bool b[50];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    int N, M; cin >> N >> M;
    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= M; j++) {
            w[i + j]++;
        }
    }

    int mx = -1e9, mxi = 0;
    for (int i = 1; i < 50; i++) {
        if (mx < w[i]) {
            mx = w[i];
            mxi = i;
        }
    }
    for (int i = 1; i < 50; i++)
        if (mx == w[i])
            cout << i << "\n";

    return 0;
}