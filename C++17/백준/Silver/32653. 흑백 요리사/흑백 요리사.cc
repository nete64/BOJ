#include <iostream>
#include <vector>
#include <numeric>
using namespace std;
using ll = long long;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int N; cin >> N;
    vector<ll> v;
    for (int i = 0; i < N; i++) {
        int X; cin >> X;
        v.push_back(X * 2);
    }
    ll ans = v[0];

    for (int i = 1; i < v.size(); i++)
        ans = (((v[i] * ans)) / (gcd(v[i], ans)));
    cout << ans;
    return 0;
}