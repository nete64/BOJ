#include <iostream>
#include <string>
using namespace std;

char arr[7][63];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    string s; cin >> s;
    int N = s.size() * 4 + 1;
    for (int i = 0; i < 5; i++)
        for (int j = 0; j < N; j++) 
            arr[i][j] = '.';
    
    for (int i = 0, k = 0; i < N - 2; i++) {
        if (i % 4 == 0) {
            if (k % 3 == 2)
                arr[0][i + 2] = arr[4][i + 2] = '*';
            else
                arr[0][i + 2] = arr[4][i + 2] = '#';
            k++;
        }
    }

    for (int i = 0, k = 0; i < N - 1; i++) {
        if (i % 2 == 1) {
            if (k % 6 == 4 || k % 6 == 5)
                arr[1][i] = arr[3][i] = '*';
            else
                arr[1][i] = arr[3][i] = '#';
            k++;
        }
    }

    for (int i = 0; i < s.size(); i++) {
        for (int j = i * 4; j <= (i + 1) * 4; j++) {
            if (i % 3 == 2)
                arr[2][i * 4] = arr[2][i * 4 + 4] = '*';
            else {
                if (arr[2][i * 4] == '.')
                    arr[2][i * 4] = '#';
            }
        }
        arr[2][i * 4 + 2] = s[i];
    }
    if (s.size() % 3 == 0)
        arr[2][N - 1] = '*';
    else
        arr[2][N - 1] = '#';

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < N; j++)
            cout << arr[i][j];
        cout << "\n";
    }
    return 0;
}