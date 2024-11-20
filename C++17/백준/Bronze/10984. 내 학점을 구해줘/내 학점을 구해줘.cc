#include <cstdio>
using namespace std;

int main()
{
    int T; scanf("%d", &T);
    while (T--) {
        int N; scanf("%d", &N);
        int sc = 0; float sg = 0;
        for (int i = 0; i < N; i++) {
            int C = 0; float G = 0;
            scanf("%d%f", &C, &G);
            sc += C;
            sg += G * C;
        }
        printf("%d %.1f\n", sc, sg / sc);
    }
    return 0;
}