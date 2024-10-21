#include <iostream>
#include <string>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    string A, B, C, D; cin >> A >> B >> C >> D;
    A += B;
    C += D;

    cout << stol(A) + stol(C);
    return 0;
}