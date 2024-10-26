#include <iostream>
using namespace std;
using ll = long long;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);

	ll N; cin >> N;
	cout << N * (N - 1) * (N - 2) * (N - 3) / 24;
	return 0;
}