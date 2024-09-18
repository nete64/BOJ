#include <iostream>
using namespace std;

int arr[100004];
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int N, M; cin >> N >> M;
	for (int i = 1; i <= N; i++) {
		int k; cin >> k;
		arr[i] = arr[i - 1] + k;
	}
	for (int i = 1; i <= M; i++) {
		int a, b; cin >> a >> b;
		cout << arr[b] - arr[a - 1] << '\n';
	}

	return 0;
}