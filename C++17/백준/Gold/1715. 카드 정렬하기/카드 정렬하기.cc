#include <iostream>
#include <queue>
#include <algorithm>
#include <functional>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	priority_queue<int, vector<int>, greater<int> > pq;

	int N; cin >> N;
	for (int i = 0; i < N; i++) {
		int X; cin >> X;
		pq.push(X);
	}

	if (N == 1) {
		cout << "0";
		return 0;
	}

	int ans = 0;
	while (pq.size() > 1) {
		int K = pq.top(); pq.pop();
		K += pq.top(); pq.pop();
		ans += K;
		pq.push(K);
	}
	cout << ans;
	return 0;
}