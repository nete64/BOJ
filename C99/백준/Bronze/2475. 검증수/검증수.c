#include <stdio.h>
int main()
{
    int n[5];
    for (int i = 0; i < 5; i++) {
        scanf("%d",&n[i]);
    }
    int sum = 0;
    for (int i = 0; i < 5; i++) {
        sum += n[i] * n[i];
    }
    printf("%d",sum%10);
    return 0;
}