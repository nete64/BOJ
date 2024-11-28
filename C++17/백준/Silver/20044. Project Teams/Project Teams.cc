#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n; cin >> n;

    vector<int> v;
    for (int i = 0; i < 2 * n; i++) {
        int X; cin >> X;
        v.push_back(X);
    }
    
    int ans = 1e9;
    sort(v.begin(), v.end());
    for (int i = 0; i < v.size(); i++)
        ans = min(ans, v[i] + v[v.size() - i - 1]);
    cout << ans;
    return 0;
}