#include <cstdio>

int main()
{
    float N;
    while (true) {
        scanf("%f", &N);
        if (N == 0)
            break;
        printf("%.2f\n", 1+N+N*N+N*N*N+N*N*N*N);
    }
    return 0;
}