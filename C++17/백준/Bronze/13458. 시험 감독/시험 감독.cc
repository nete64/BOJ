#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;
using ll = long long;

ll A[1000002];
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);

	int N; cin >> N;
	for (int i = 0; i < N; i++)
		cin >> A[i];

	ll ans = 0;
	ll B, C; cin >> B >> C;
	for (int i = 0; i < N; i++) {
		A[i] -= B;
		ans++;
		if (A[i] < 0) continue;
		if (A[i] % C > 0) ans += A[i] / C + 1;
		else ans += A[i] / C;
	}
	cout << ans;
	return 0;
}