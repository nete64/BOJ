#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int N, M; cin >> N >> M;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            if (i % 2 == 0) {
                if (j % 2 == 0)
                    cout << "*";
                else
                    cout << ".";
            } else {
                if (j % 2 == 0)
                    cout << ".";
                else
                    cout << "*";
            }
        }
        cout << "\n";
    }
    return 0;
}