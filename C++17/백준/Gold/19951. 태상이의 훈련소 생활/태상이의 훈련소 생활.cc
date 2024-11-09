#include <iostream>
#include <algorithm>
using namespace std;

int arr[100002], f[100002];
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int N, M; cin >> N >> M;
	for (int i = 1; i <= N; i++)
		cin >> arr[i];

	for (int i = 1; i <= M; i++) {
		int a, b, k; cin >> a >> b >> k;
		f[a] += k;
		f[b + 1] -= k;
	}

	int cur = 0;
	for (int i = 1; i <= N; i++) {
		cur += f[i];
		cout << arr[i] + cur << " ";
	}
	return 0;
}