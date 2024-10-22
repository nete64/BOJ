#include <iostream>
#include <algorithm>
using namespace std;

int reverse(int n)
{
	int ret = 0;
	while (n > 0) {
		ret += n % 10;
		ret *= 10;
		n /= 10;
	}
	return ret / 10;
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);

	int A, B; cin >> A >> B;
	cout << max(reverse(A), reverse(B));
	
	return 0;
}