#include <iostream>
#include <string>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n; cin >> n;
    while (true) {
        n++;

        bool b = false;
        string s = to_string(n);
        for (auto c : s) {
            if (c == '0') {
                b = true;
            }
        }

        if (!b) {
            cout << n;
            break;
        }
    }
    return 0;
}