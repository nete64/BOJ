#include <iostream>
#include <string>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int ans = 0;
    int N; cin >> N;
    string s; cin >> s;
    for (int i = 0; i < N; i++) {
        if (i == N - 1) break;
        if (s[i] == 'E' && s[i + 1] == 'W')
            ans++;
    }
    cout << ans;
    return 0;
}