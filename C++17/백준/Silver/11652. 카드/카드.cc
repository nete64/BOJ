#include <iostream>
#include <unordered_map>
#include <algorithm>
using namespace std;
using ll = long long;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	unordered_map<ll, ll> um;
	int N; cin >> N;
	for (int i = 0; i < N; i++) {
		ll x; cin >> x;
		if (um.count(x) == 0)
			um[x] = 1;
		else
			um[x]++;
	}

	ll ans = -1, cnt = -1;
	for (auto& e : um) {
		if (cnt < e.second) {
			cnt = e.second;
			ans = e.first;
		}
		if (cnt == e.second && ans > e.first)
			ans = e.first;
	}
	cout << ans;
	return 0;
}