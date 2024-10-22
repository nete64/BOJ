#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;
using ll = long long;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    ll A, B, C; cin >> A >> B >> C;
    if (B >= C)
        cout << "-1";
    else
        cout << A / (C - B) + 1;
    return 0;
}