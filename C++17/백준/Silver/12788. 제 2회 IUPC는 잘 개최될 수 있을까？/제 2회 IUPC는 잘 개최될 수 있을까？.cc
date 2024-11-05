#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	vector<int> v;
	int N, M, K; cin >> N >> M >> K;
	for (int i = 0; i < N; i++) {
		int X; cin >> X;
		v.push_back(X);
	}

	int sum = 0, ans = 0;
	sort(v.begin(), v.end());
	for (int i = v.size() - 1; i >= 0; i--) {
		sum += v[i];
		ans++;
		if (sum >= M * K) {
			break;
		}
	}
	if (sum >= M * K)
		cout << ans;
	else
		cout << "STRESS";
	return 0;
}