#include <iostream>
#include <algorithm>
using namespace std;

int arr[1002];
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int N, k; cin >> N >> k;
	for (int i = 0; i < N; i++)
		cin >> arr[i];
	sort(arr, arr + N);
	cout << arr[N - k];
	return 0;
}