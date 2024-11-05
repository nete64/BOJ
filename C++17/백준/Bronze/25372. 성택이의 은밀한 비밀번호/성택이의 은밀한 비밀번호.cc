#include <iostream>
#include <string>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int N; cin >> N;
    while (N--) {
        string s; cin >> s;
        if (s.size() >= 6 && s.size() <= 9)
            cout << "yes\n";
        else
            cout << "no\n";
    }
    return 0;
}