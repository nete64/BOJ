#include <iostream>
#include <algorithm>
using namespace std;

struct P {
	int s, e;
};

bool cmp(P& a, P& b)
{
	if (a.e == b.e)
		return a.s < b.s;
	return a.e < b.e;
}

P p[100002];
int ans = 1, ce;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int N; cin >> N;
	for (int i = 0; i < N; i++)
		cin >> p[i].s >> p[i].e;

	sort(p, p + N, cmp);

	ce = p[0].e;
	for (int i = 1; i < N; i++) {
		if (ce <= p[i].s) {
			ce = p[i].e;
			ans++;
		}
	}
	cout << ans;

	return 0;
}