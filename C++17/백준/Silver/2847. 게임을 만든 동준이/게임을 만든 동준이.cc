#include <iostream>
using namespace std;

int arr[102];
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);

	int N; cin >> N;
	for (int i = 0; i < N; i++)
		cin >> arr[i];

	int ans = 0;
	for (int i = N - 2; i >= 0; i--) {
		if (arr[i] >= arr[i + 1]) {
			ans += arr[i] - (arr[i + 1] - 1);
			arr[i] = arr[i + 1] - 1;
		}
	}
	cout << ans;
	return 0;
}