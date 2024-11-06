#include <iostream>
using namespace std;
using ll = long long;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    ll N; cin >> N;
    if (N % 2 == 1)
        cout << "SK";
    else
        cout << "CY";
    return 0;
}