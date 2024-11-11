#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    while (true) {
        int b; string p, m;
        cin >> b;

        if (b == 0)
            break;

        cin >> p >> m;

        int y = 0;
        for (auto c : m)
            y = y * b + (c - '0');

        int x = 0;
        for (auto c : p) {
            x = x * b + (c - '0');
            x %= y;
        }

        vector<int> v;
        if (x == 0)
            v.push_back(0);
            
        while (x > 0) {
            v.push_back(x % b);
            x /= b;
        }

        for (int i = v.size() - 1; i >= 0; i--)
            cout << v[i];
        cout << "\n";
    }
    return 0;
}