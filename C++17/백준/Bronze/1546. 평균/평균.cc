#include <iostream>
using namespace std;

int arr[1001];
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int N; cin >> N;
	int m = 0;
	float ans = 0;
	for (int i = 0; i < N; i++) {
		cin >> arr[i];
		m = max(m, arr[i]);
	}
	for (int i = 0; i < N; i++) {
		ans += (arr[i] / (float)m) * 100;
	}
	cout << ans / N;

	return 0;
}