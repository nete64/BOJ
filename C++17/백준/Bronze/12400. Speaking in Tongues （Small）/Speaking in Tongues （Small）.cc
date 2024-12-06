#include <iostream>
#include <string>
using namespace std;

char G[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
char S[] = {'y', 'h', 'e', 's', 'o', 'c', 'v', 'x', 'd', 'u', 'i', 'g', 'l', 'b', 'k', 'r', 'z', 't', 'n', 'w', 'j', 'p', 'f', 'm', 'a', 'q'};
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int T; cin >> T;
    cin.ignore();
    for (int i = 1; i <= T; i++) {
        string s;
        getline(cin, s);
        cout << "Case #" << i << ": ";
        for (auto c : s) {
            if (c == ' ') {
                cout << " ";
                continue;
            }
            for (int j = 0; j < 26; j++) {
                if (c == G[j])
                    cout << S[j];
            }
        }
        cout << "\n";
    }
    return 0;
}