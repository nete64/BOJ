#include <iostream>
#include <string>
using namespace std;

string s[15];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int M, N, K; cin >> M >> N >> K;
    for (int i = 0; i < M; i++)
        cin >> s[i];

    for (int i = 0; i < M; i++) {
        for (int y = 0; y < K; y++) {
            for (int j = 0; j < N; j++) {
                for (int w = 0; w < K; w++) {
                    cout << s[i][j];
                }
            }
            cout << "\n";
        }
    }
    return 0;
}