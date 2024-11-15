#include <iostream>
using namespace std;

int N, M, S[100002];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int N, M; cin >> N >> M;
    for (int i = 0; i < N; i++)
        cin >> S[i];
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N + M; j++) {
            int k; cin >> k;
            S[j] += k;
            S[i] -= k;
        }
    }
    for (int i = 0; i < N + M; i++)
        cout << S[i] << " ";
    return 0;
}