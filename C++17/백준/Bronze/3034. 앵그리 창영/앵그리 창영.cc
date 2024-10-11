#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int N, W, H; cin >> N >> W >> H;
    float b = sqrt(W * W + H * H);
    for (int i = 0; i < N; i++) {
        int x; cin >> x;
        if (x <= b)
            cout << "DA\n";
        else
            cout << "NE\n";
    }
    return 0;
}