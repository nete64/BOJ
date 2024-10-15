#include <iostream>
#include <algorithm>
using namespace std;

bool cmp(int a, int b)
{
	return a > b;
}
int arr[103];
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int X; cin >> X;
	for (int i = 0; i < X; i++) {
		int N; cin >> N;
		int mn = 123456789, mx = -123456789;
		int lg = -123456789;
		for (int j = 0; j < N; j++) {
			cin >> arr[j];
			mx = max(mx, arr[j]);
			mn = min(mn, arr[j]);
		}
		sort(arr, arr + N, cmp);
		for (int j = 0; j < N - 1; j++) {
			lg = max(lg, arr[j] - arr[j + 1]);
		}
		cout << "Class " << i + 1 << "\n";
		cout << "Max " << mx << ", Min " << mn << ", Largest gap " << lg << "\n";
	}
	return 0;
}