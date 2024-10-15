#include <iostream>
#include <algorithm>
using namespace std;
using ll = long long;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	ll A, B; cin >> A >> B;
	if (A > B) swap(A, B);
	ll c = A, d = B; 
	while (c > 0) {
		ll tmp = d;
		d = c;
		c = tmp % c;
	}
	cout << A / d * B;
	return 0;
}