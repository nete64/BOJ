#include <iostream>
#include <string>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    string s; cin >> s;
    int N; cin >> N;
    int ans = 0;
    for (int i = 0; i < N; i++) {
        string t; cin >> t;
        if (s == t)
            ans++;
    }
    cout << ans;
    return 0;
}