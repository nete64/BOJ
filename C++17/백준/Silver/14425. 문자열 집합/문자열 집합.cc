#include <iostream>
#include <unordered_set>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    unordered_set<string> us;
    int N, M; cin >> N >> M;
    for (int i = 0; i < N; i++) {
        string s; cin >> s;
        us.insert(s);
    }

    int ans = 0;
    for (int i = 0; i < M; i++) {
        string s; cin >> s;
        if (us.count(s) > 0)
            ans++;
    }
    cout << ans;
    return 0;
}