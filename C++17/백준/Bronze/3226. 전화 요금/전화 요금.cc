#include <cstdio>

int main()
{
    int N; scanf("%d", &N);
    int ans = 0;
    while (N--) {
        int h, m, d;
        scanf("%2d:%2d %2d", &h, &m, &d);
        int a = 60 * h + m;
        int b = 60 * h + m + d;
        for (int i = a; i < b; i++) {
            int t = i % 1440;
            if (t >= 420 && t < 1140)
                ans += 10;
            else
                ans += 5;
        }
    }
    printf("%d", ans);
    return 0;
}