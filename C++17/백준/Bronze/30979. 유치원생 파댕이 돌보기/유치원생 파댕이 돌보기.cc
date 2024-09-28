#include <iostream>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int k = 0;
	int T, N; cin >> T >> N;
	for (int i = 0; i < N; i++) {
		int X; cin >> X;
		k += X;
	}
	if (T <= k)
		cout << "Padaeng_i Happy";
	else
		cout << "Padaeng_i Cry";

	return 0;
}