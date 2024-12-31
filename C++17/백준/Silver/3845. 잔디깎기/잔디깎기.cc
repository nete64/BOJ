#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;

int f(int e, double w, vector<double>& v)
{
    sort(v.begin(), v.end());

    double half = w / 2;
    double curr = 0;
    for (int i = 0; i < v.size(); i++) {
        if (v[i] - half <= curr)
            curr = v[i] + half;
        else
            return -2;
    }

    if (curr < e)
        return -1;
    return 1;
}

int main()
{
    while (true) {
        int nx, ny; double w;
        scanf("%d %d %lf", &nx, &ny, &w);
        if (nx == 0 && ny == 0 && w == 0.0)
            break;
        
        vector<double> vx;
        for (int i = 0; i < nx; i++) {
            double xi; scanf("%lf", &xi);
            vx.push_back(xi);
        }

        int b1 = f(75, w, vx);

        vector<double> vy;
        for (int i = 0; i < ny; i++) {
            double yi; scanf("%lf", &yi);
            vy.push_back(yi);
        }

        int b2 = f(100, w, vy);

        if (b1 == 1 && b2 == 1)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}