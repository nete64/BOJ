#include <iostream>
#include <algorithm>
using namespace std;

int arr[3];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int a = 100, b = 100;
    int n; cin >> n;
    for (int i = 0; i < n; i++) {
        int x, y; cin >> x >> y;
        if (x < y)
            a -= y;
        else if (x > y)
            b -= x;
    }
    cout << a << "\n" << b;
    return 0;
}