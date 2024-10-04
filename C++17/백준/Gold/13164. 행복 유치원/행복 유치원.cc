#include <iostream>
#include <algorithm>
using namespace std;

int arr[300002], dist[300002];
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	
	int N, K;
	cin >> N >> K;
	for (int i = 0; i < N; i++)
		cin >> arr[i];

	for (int i = 0; i < N - 1; i++)
		dist[i] = arr[i + 1] - arr[i];

	sort(dist, dist + N - 1);

	int ans = 0;
	for (int i = 0; i < N - K; i++)
		ans += dist[i];

	cout << ans;
	return 0;
}