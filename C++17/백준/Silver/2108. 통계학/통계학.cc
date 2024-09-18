#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int arr[500002];
int cnt[10000];
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int N; cin >> N;
	int total = 0;
	int maxx = -5000, minn = 5000;
	int maxcnt = 0;

	for (int i = 0; i < N; i++) {
		cin >> arr[i];
		total += arr[i];
		cnt[arr[i] + 4000]++;
		maxx = max(maxx, arr[i]);
		minn = min(minn, arr[i]);
	}

	for (int i = 0; i <= 8000; i++)
		maxcnt = max(maxcnt, cnt[i]);

	int tmp = 0;
	int ans = 0;
	for (int i = 0; i <= 8000; i++) {
		if (maxcnt == cnt[i]) {
			ans = i - 4000;
			tmp++;
		}

		if (tmp == 2) {
			ans = i - 4000;
			break;
		}
	}

	sort(arr, arr + N);
	cout << round(total / (float)N) + 0.0 << '\n' << arr[N / 2] << '\n' << ans << '\n' << abs(maxx - minn);

	return 0;
}