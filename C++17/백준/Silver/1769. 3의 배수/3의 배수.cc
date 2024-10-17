#include <iostream>
#include <string>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    string s; cin >> s;
    int N = 0;
    for (auto& c : s)
        N += c - '0';

    int cnt = 0;
    if (s.size() >= 2)
        cnt = 1;
    while (N >= 10) {
        int a = N, b = 0;
        while (a > 0) {
            b += a % 10;
            a /= 10;
        }
        N = b;
        cnt++;
    }
    cout << cnt << "\n";
    if (N % 3 == 0)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}