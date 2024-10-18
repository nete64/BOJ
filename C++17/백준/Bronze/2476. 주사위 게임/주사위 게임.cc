#include <iostream>
#include <algorithm>
using namespace std;

int arr[3];
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int ans = 0;
	int N; cin >> N;
	while (N--) {
		cin >> arr[0] >> arr[1] >> arr[2];
		sort(arr, arr + 3);
		if (arr[0] == arr[2])
			ans = max(ans, 10000 + arr[0] * 1000);
		else if (arr[0] == arr[1] || arr[1] == arr[2])
			ans = max(ans, 1000 + arr[1] * 100);
		else
			ans = max(ans, arr[2] * 100);
	}
	cout << ans;
	return 0;
}