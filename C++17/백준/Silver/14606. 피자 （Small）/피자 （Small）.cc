#include <iostream>
using namespace std;

int dp(int n)
{
	if (n == 0) return 0;
	if (n == 1) return 0;
	if (n == 2) return 1;

	int a = n / 2;
	int b = n - n / 2;
	return a * b + dp(a) + dp(b);
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int N; cin >> N;
	cout << dp(N);

	return 0;
}