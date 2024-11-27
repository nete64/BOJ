#include <cstdio>
#include <algorithm>
using namespace std;

int digit[10];
bool isDiffDigit(int x)
{
    int zerocnt = 0;
    while (x > 0) {
        digit[x % 10]++;
        x /= 10;
        zerocnt++;
    }
    zerocnt = 5 - zerocnt;
    digit[0] += zerocnt;

    for (int i = 0; i <= 9; i++) {
        if (digit[i] >= 2)
            return false;
    }
    return true;
}
int main()
{
    int N; scanf("%d", &N);
    for (int i = 1, k = 0; i <= 99999; i++) {
        if (i * 9 > 99999) continue;
        fill(digit, digit + 10, 0);
        if (isDiffDigit(i) && isDiffDigit(i * 9))
            k++;
        if (k == N) {
            printf("%05d %05d", i * 9, i);
            break;
        }
    }
    return 0;
}