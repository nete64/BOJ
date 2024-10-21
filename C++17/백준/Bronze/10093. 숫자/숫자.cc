#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    long long A, B; cin >> A >> B;
    if (A > B) swap(A, B);

    if (A == B)
        cout << "0";
    else
        cout << B - A - 1 << "\n";

    for (long long i = A + 1; i <= B - 1; i++)
        cout << i << " ";
    return 0;
}