#include <iostream>
#include <algorithm>
using namespace std;

long long N, M, arr[1000002];
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	cin >> N >> M;
    for (long long i = 0; i < N; i++)
		cin >> arr[i];
	
	long long lo = 0, hi = 1000000002;
	while(lo + 1 < hi) {
		long long mid = (lo + hi) / 2;
		long long sum = 0;
		for (int i = 0; i < N; i++) {
			if (arr[i] > mid) {
				sum += arr[i] - mid;
			}
		}
		if (sum >= M) lo = mid;
		else hi = mid;
	}
	cout << lo;
	return 0;
}