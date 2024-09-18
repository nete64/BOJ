#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int arr[100];
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int N, K, ans = 0; cin >> N >> K;
	for (int i = 0; i < N; i++) {
		cin >> arr[i];
	}
	for (int i = N - 1; i >= 0; i--) {
		ans += K / arr[i];
		K -= (K / arr[i]) * arr[i];
	}
	cout << ans;

	return 0;
}