#include <iostream>
using namespace std;

int arr[10001];
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int N; cin >> N;
	for (int i = 0; i < N; i++) {
		int k; cin >> k;
		arr[k]++;
	}

	for (int i = 1; i <= 10000; i++) {
		while (arr[i]-- > 0) {
			cout << i << '\n';
		}
	}
	return 0;
}