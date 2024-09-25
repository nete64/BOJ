#include <iostream>
#include <algorithm>
using namespace std;

int arr[53];
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int L, n; cin >> L;
	for (int i = 0; i < L; i++)
		cin >> arr[i];
	cin >> n;
	
	sort(arr, arr + L);

	int lower = arr[0];
	int upper = arr[0];
	for (int i = 0; i < L; i++) {
		if (arr[i] > n)
			break;
		else
			lower = arr[i];
	}
	for (int i = 0; i < L; i++) {
		if (arr[i] >= n) {
			upper = arr[i];
			break;
		}
	}
	if (lower > n) lower = 0;
	int ans = 0;
	for (int i = lower + 1; i <= n; i++) {
		for (int j = n; j <= upper - 1; j++) {
			if (i == j)
				continue;
			ans++;
		}
	}
	cout << ans;

	return 0;
}