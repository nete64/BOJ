#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

struct P {
    string s;
    int d, m, y;
};
P p[102];
bool cmp(P& a, P& b)
{
    if (a.y == b.y) {
        if (a.m == b.m) {
            return a.d < b.d;
        }
        return a.m < b.m;
    }
    return a.y < b.y;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n; cin >> n;
    for (int i = 0; i < n; i++)
        cin >> p[i].s >> p[i].d >> p[i].m >> p[i].y;
    
    sort(p, p + n, cmp);
    cout << p[n-1].s << "\n" << p[0].s;
    return 0;
}