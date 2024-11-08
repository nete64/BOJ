#include <cstdio>
#include <cmath>

int main()
{
    int T; scanf("%d", &T);
    while (T--) {
        float x1, y1, r1, x2, y2, r2;
        scanf("%f%f%f%f%f%f", &x1, &y1, &r1, &x2, &y2, &r2);
        float d = sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
        int ans = 0;
        if (d == 0) {
            if (r1 == r2)
                ans = -1;
            else
                ans = 0;
        } else {
            if (r1 + r2 == d || abs(r1 - r2) == d)
                ans = 1;
            else if (abs(r1 - r2) < d && d < r1 + r2)
                ans = 2;
        }
        printf("%d\n", ans);
    }
    return 0;
}