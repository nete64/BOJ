#include <iostream>
#include <algorithm>
#include <unordered_map>
using namespace std;

int arr[1000002], sorted[1000002];
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int N; cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> arr[i];
		sorted[i] = arr[i];
	}

	sort(sorted, sorted + N);

	int m = sorted[0], k = 0;
	unordered_map<int, int> um;
	for (int i = 0; i < N; i++) {
		if (m != sorted[i]) {
			k++;
			m = sorted[i];
			um[m] = k;
		}
	}
	for (int i = 0; i < N; i++) {
		cout << um[arr[i]] << " ";
	}

	return 0;
}