#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int N; cin >> N;
    vector<int> v;
    for (int i = 0; i < N; i++) {
        int X; cin >> X;
        v.push_back(X);
    }

    sort(v.begin(), v.end());

    int ans = 0;
    while (v.size() > 1) {
        ans += v[v.size() - 2] * v.back();
        int k = v[v.size() - 2] + v.back();
        v.pop_back();
        v.pop_back();
        v.push_back(k);
    }
    cout << ans;
    return 0;
}