#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    vector<int> v;
    int n; cin >> n;
    for (int i = 0; i < 2 * n; i++) {
        int X; cin >> X;
        v.push_back(X);
    }

    sort(v.begin(), v.end());

    int mn = 1e9, mx = -1e9;
    for (int i = 0; i < v.size() / 2; i++) {
        mn = min(mn, v[i] + v[v.size() - 1 - i]);
        mx = max(mx, v[i] + v[v.size() - 1 - i]);
    }
    cout << mx - mn;
    return 0;
}