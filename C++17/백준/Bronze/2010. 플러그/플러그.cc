#include <iostream>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int ans = 0;
	int N; cin >> N;
	for (int i = 0; i < N; i++) {
		int X; cin >> X;
		if (i == N - 1)
			ans += X;
		else
			ans += X - 1;
	}
	cout << ans;
	return 0;
}