#include <iostream>
using namespace std;

int arr[6];
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int N; cin >> N;
	for (int i = 0; i < 6; i++)
		cin >> arr[i];

	int T, P; cin >> T >> P;
	int ans = 0;
	for (int i = 0; i < 6; i++) {
		if (arr[i] > 0) {
			ans += (arr[i]-1) / T + 1;
		}
	}
	cout << ans << '\n' << N / P << " " << N % P;

	return 0;
}