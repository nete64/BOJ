#include <stdio.h>
long long n, fac = 1;
int main()
{
    scanf("%lld", &n);
    for (int i = 1; i <= n; i++)
        fac *= i;
    printf("%lld",fac);
    return 0;
}