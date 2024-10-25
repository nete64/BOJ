#include <iostream>
#include <unordered_set>
#include <algorithm>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    unordered_set<int> s, e;
    int A, B; cin >> A >> B;
    for (int i = 0; i < A; i++) {
        int X; cin >> X;
        s.insert(X);
    }
    for (int i = 0; i < B; i++) {
        int X; cin >> X;
        e.insert(X);
    }

    int ans = 0;
    for (auto& k : s) {
        if (e.count(k) == 0)
            ans++;
    }
    ans += (e.size() - (s.size() - ans));
    cout << ans;
    return 0;
}