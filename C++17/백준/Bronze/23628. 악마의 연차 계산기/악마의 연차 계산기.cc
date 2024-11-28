#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int sy, sm, sd; cin >> sy >> sm >> sd;
    int ey, em, ed; cin >> ey >> em >> ed;
    int elapsed = (ey - sy) * 360 - (sm - em) * 30 - (sd - ed);

    int mr = 0, yr = 0;
    mr = (elapsed / 30) >= 36 ? 36 : elapsed / 30;
    for (int i = 1; i <= elapsed / 360; i++) {
        int A = (i - 1) / 2;
        yr += A + 15;
    }
    cout << yr << " " << mr << "\n";
    cout << elapsed << "days";
    return 0;
}