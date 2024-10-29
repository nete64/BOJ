#include <iostream>
using namespace std;
using ull = unsigned long long;

ull gcd(ull a, ull b)
{
    if (b == 0) return a;
    return gcd(b, a % b);
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
    
    ull A, B; cin >> A >> B;
    for (ull i = 0; i < gcd(A, B); i++)
        cout << "1";
	return 0;
}