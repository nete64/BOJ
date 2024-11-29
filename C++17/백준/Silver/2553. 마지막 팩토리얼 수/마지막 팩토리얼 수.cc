#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int N; cin >> N;
    int res = 1, two = 0;
    for (int i = 1; i <= N; i++) {
        int m = i;
        while (m % 2 == 0) {
            two++;
            m /= 2;
        }
        while (m % 5 == 0) {
            two--;
            m /= 5;
        }
        res = (res * m) % 10;
    }
    while (two > 0) {
        res = (res * 2) % 10;
        two--;
    }
    cout << res;
    return 0;
}