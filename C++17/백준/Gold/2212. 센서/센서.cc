#include <iostream>
#include <algorithm>
using namespace std;

int arr[10001], dist[10001];
int main()
{
	int N, K;
	cin >> N >> K;
	for (int i = 0; i < N; i++)
		cin >> arr[i];
	sort(arr, arr + N);

	for (int i = 0; i < N - 1; i++)
		dist[i] = arr[i + 1] - arr[i];
	sort(dist, dist + N - 1);

	int ans = 0;
	for (int i = 0; i < N - K; i++)
		ans += dist[i];
	cout << ans;
	return 0;
}