#include <iostream>
using namespace std;

bool b[10002];
void d(int n)
{
    int k = n;
    while (true) {
        int t = k;
        while (t > 0) {
            k += t % 10;
            t /= 10;
        }
        if (k == n || k > 10000) break;
        if (b[k]) break;
        b[k] = true;
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    for (int i = 1; i <= 10000; i++)
        d(i);
    for (int i = 1; i <= 10000; i++)
        if (!b[i])
            cout << i << "\n";

    return 0;
}