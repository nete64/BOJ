#include <iostream>
using namespace std;

int gcd(int a, int b)
{
	if (b == 0) return a;
	return gcd(b, a % b);
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int A, B, C, D; cin >> A >> B >> C >> D;
	int E = A * D + B * C;
	int F = B * D;
	int G = E > F ? gcd(E, F) : gcd(F, E);
	cout << E / G << " " << F / G;
	return 0;
}