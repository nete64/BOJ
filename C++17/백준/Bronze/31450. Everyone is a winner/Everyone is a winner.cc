#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int M, K; cin >> M >> K;
    if (M % K == 0)
        cout << "Yes";
    else
        cout << "No";
    return 0;
}