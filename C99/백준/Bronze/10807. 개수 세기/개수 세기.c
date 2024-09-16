#include <stdio.h>
int arr[101];
int main()
{
    int N;
    scanf("%d", &N);
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }
    int k, ans = 0;
    scanf("%d", &k);
    for (int i = 0; i < N; i++) {
        if (arr[i] == k)
            ans++;
    }
    printf("%d",ans);
    return 0;
}