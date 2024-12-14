#include <iostream>
#include <string>
#include <cmath>
using namespace std;
using ll = long long;

int main()
{
    string s; cin >> s;
    ll ans = 0;
    for (ll i = s.size() - 1, j = 1; i >= 0; i--, j *= 26)
        ans += (s[i] - 'A' + 1) * j;
    cout << ans;
    return 0;
}