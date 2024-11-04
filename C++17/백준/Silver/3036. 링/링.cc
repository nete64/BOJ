#include <iostream>
#include <algorithm>
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

	int N; cin >> N;
	int X; cin >> X;
	for (int i = 1; i < N; i++) {
		int K; cin >> K;
		int g = X > K ? gcd(X, K) : gcd(K, X);
		cout << X / g << "/" << K / g << "\n";
	}   
	return 0;
}