#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    while (true) {
        int M, F; cin >> M >> F;
        if (M == 0 && F == 0)
            break;
        cout << M + F << "\n";
    }
    return 0;
}