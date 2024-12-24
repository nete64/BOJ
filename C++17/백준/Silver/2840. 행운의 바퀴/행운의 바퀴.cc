#include <iostream>
#include <string>
using namespace std;

char s[30];
int main()
{
    int N, K; cin >> N >> K;

    for (int i = 0; i < 30; i++)
        s[i] = '?';

    int w = 0;
    for (int i = 0; i < K; i++) {
        int pos; char c;
        cin >> pos >> c;

        pos %= N;
        if (w - pos < 0) w = w - pos + N;
        else w -= pos;

        if (s[w] != c && s[w] != '?') {
            cout << "!\n";
            return 0;
        }

        s[w] = c;
    }

    for (int i = 0; i < N; i++) {
        for (int j = i + 1; j < N; j++) {
            if (s[i] != '?' && s[i] == s[j]) {
                cout << "!\n";
                return 0;
            }
        }
    }

    for (int i = 0; i < N; i++) {
        cout << s[(i + w) % N];
    }
    cout << "\n";

    return 0;
}