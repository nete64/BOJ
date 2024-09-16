#include <stdio.h>
int arr[43];
int main()
{
    for (int i = 0; i < 10; i++) {
        int k;
        scanf("%d", &k);
        arr[k % 42] = 1;
    }
    int ans = 0;
    for (int i = 0; i < 42; i++) {
        if (arr[i] == 1)
            ans++;
    }
    printf("%d", ans);
    return 0;
}