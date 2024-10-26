#include <iostream>
#include <algorithm>
using namespace std;

struct P {
	int s, t;
};
bool cmp(P& a, P& b)
{
	if (a.s == b.s)
		return a.t < b.t;
	return a.s < b.s;
}
P p[102];
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int N; cin >> N;
	for (int i = 0; i < N; i++)
		cin >> p[i].s >> p[i].t;

	sort(p, p + N, cmp);
	
	int ans = 0;
	for (int i = 0; i < N; i++) {
		if (ans <= p[i].s) {
			ans += (p[i].s - ans);
		}
		ans += p[i].t;
	}
	cout << ans;
	return 0;
}