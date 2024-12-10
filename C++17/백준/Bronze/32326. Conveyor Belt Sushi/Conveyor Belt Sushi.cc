#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int R, G, B; cin >> R >> G >> B;
    cout << R * 3 + G * 4 + B * 5;
    return 0;
}