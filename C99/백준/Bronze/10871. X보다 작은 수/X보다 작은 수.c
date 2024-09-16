#include <stdio.h>
int main()
{
    int t, k;
    scanf("%d%d",&t,&k);
    while(t--) {
        int n;
        scanf("%d",&n);
        if (n < k) printf("%d ", n);
    }
    return 0;
}