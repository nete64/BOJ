#include <iostream>
#include <queue>
#include <algorithm>
#include <functional>
using namespace std;
using ll = long long;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int T; cin >> T;
	while (T--) {
		priority_queue<ll, vector<ll>, greater<ll> > pq;

		int N; cin >> N;
		for (int i = 0; i < N; i++) {
			ll X; cin >> X;
			pq.push(X);
		}

		ll ans = 0;
		while (pq.size() > 1) {
			ll K = pq.top(); pq.pop();
			K += pq.top(); pq.pop();
			ans += K;
			pq.push(K);
		}
		cout << ans << "\n";
	}
	return 0;
}