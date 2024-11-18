#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int N; cin >> N;
    int K; cin >> K;
    for (int i = 1; i < N; i++) {
        int X; cin >> X;
        K ^= X;
    }
    if (K == 0)
        cout << "cubelover";
    else
        cout << "koosaga";
    return 0;
}