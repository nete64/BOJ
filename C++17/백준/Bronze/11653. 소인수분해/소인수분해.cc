#include <iostream>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);

	int N; cin >> N;
	int k = 2;
	while (k <= N) {
		if (N % k == 0) {
			cout << k << "\n";
			N /= k;
		}
		else {
			k++;
		}
	}
	return 0;
}