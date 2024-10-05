#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;
using ull = unsigned long long;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	ull S; cin >> S;
	ull n = (-1 + sqrt(1 + 8 * S)) / 2;
	cout << n;

	return 0;
}