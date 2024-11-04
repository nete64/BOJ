#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;
using ll = long long;

vector<ll> v[100001];
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
    
	int N; cin >> N;
	for (int i = 1; i <= N; i++) {
		ll x, y; cin >> x >> y;
		v[y].push_back(x);
	}
	for (int i = 1; i <= N; i++)
		sort(v[i].begin(), v[i].end());
	
	ll ans = 0;
	for (int i = 1; i <= N; i++) {
		if (v[i].size() == 1) continue;

		for (int j = 0; j < v[i].size(); j++) {
			if (j == 0) ans += abs(v[i][j] - v[i][j + 1]);
			else if (j == v[i].size() - 1) ans += abs(v[i][j] - v[i][j - 1]);
			else ans += min(abs(v[i][j] - v[i][j + 1]), abs(v[i][j] - v[i][j - 1]));
		}
	}
	cout << ans;
	return 0;
}