#include <iostream>
#include <cmath>
#include <algorithm>
#include <unordered_map>
using namespace std;

unordered_map<int, int> um;
int get_digit_count(int X)
{
    int ret = 0;
    while (X > 0) {
        X /= 10;
        ret++;
    }
    return ret;
}
bool check(int N)
{
    unordered_map<int, int> m;
    int t = N;
    while (t > 0)
    {
        m[t % 10]++;
        t /= 10;
    }
    for (auto& e : m) {
        if (um.count(e.first) == 0)
            return false;
        if (e.second != um[e.first])
            return false;
    }
    return true;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int X; cin >> X;
    int t = X;
    while (t > 0) {
        um[t % 10]++;
        t /= 10;
    }

    for (int i = X + 1; i <= pow(10, get_digit_count(X)) - 1; i++) {
        if (check(i)) {
            cout << i;
            return 0;
        }
    }
    cout << "0";
    return 0;
}