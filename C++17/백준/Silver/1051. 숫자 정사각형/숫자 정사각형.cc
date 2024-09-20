#include <stdio.h>
#include <math.h>

int arr[52][52];
int min(int a, int b)
{
    if (a < b)
        return a;
    return b;
}
int main()
{
    int N, M;
    scanf("%d%d", &N, &M);
    for (int i = 0; i < N; i++)
        for (int j = 0; j < M; j++)
            scanf("%1d", &arr[i][j]);
    
    int max_size = 1;
    for (int i = 0; i < N - 1; i++) {
        for (int j = 0; j < M - 1; j++) {
            for (int k = 1; k < min(M - j, N - i); k++) {
                if ((arr[i][j] == arr[i+k][j]) && (arr[i][j] == arr[i][j+k]) && (arr[i][j] == arr[i+k][j+k])) {
                    if (pow(k+1, 2) > max_size) {
                        max_size = pow(k+1, 2);
                    }
                }
            }
        }
    }

    printf("%d", max_size);

    return 0;
}