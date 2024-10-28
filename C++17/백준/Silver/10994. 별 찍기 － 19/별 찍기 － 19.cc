#include <iostream>
using namespace std;

char c[398][398];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int N; cin >> N;
    int s = 4 * (N - 1) + 1;
    int a = 0, b = s;
    while (a <= b) {
        for (int i = a; i < b; i++)
            c[a][i] = c[b - 1][i] = c[i][a] = c[i][b - 1] = '*';
        a += 2;
        b -= 2;
    }

    for (int i = 0; i < s; i++) {
        for (int j = 0; j < s; j++) {
            if (c[i][j] == '*')
                cout << c[i][j];
            else
                cout << " ";
        }
        cout << "\n";
    }
    return 0;
}