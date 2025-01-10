#include <iostream>
#include <algorithm>
using namespace std;

int w[50];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    int N, M, mx = -1e9; cin >> N >> M;
    for (int i = 1; i <= N; i++)
        for (int j = 1; j <= M; j++)
            w[i + j]++;

    for (int i = 1; i < 50; i++)
        mx = max(mx, w[i]);

    for (int i = 1; i < 50; i++)
        if (mx == w[i])
            cout << i << "\n";

    return 0;
}