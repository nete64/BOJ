#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

bool cmp(const pair<int, int>& a, const pair<int, int>& b)
{
    return a.first > b.first;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    vector<pair<int, int> > v;
    int N, C; cin >> N >> C;
    for (int i = 0; i < N; i++) {
        int X; cin >> X;

        bool b = false;
        for (auto& k : v) {
            if (k.second == X) {
                b = true;
                k.first++;
                break;
            }
        }
        if (!b)
            v.push_back({1, X});
    }
    stable_sort(v.begin(), v.end(), cmp);

    for (auto k : v)
        while (k.first--) {
            cout << k.second << " ";
        }
    return 0;
}