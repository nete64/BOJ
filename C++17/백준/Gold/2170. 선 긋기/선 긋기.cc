#include <iostream>
#include <algorithm>
using namespace std;

struct P {
	int x, y;
};
bool cmp(P& a, P& b)
{
	return a.x < b.x;
}
P p[1000002];
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int N; cin >> N;
	for (int i = 0; i < N; i++)
		cin >> p[i].x >> p[i].y;

	sort(p, p + N, cmp);

	int ans = 0;
	int a = -1e9-9, b = -1e9-9;
	for (int i = 0; i < N; i++) {
		if (b < p[i].x) {
			ans += b - a;
			a = p[i].x;
			b = p[i].y;
		}
		else b = max(b, p[i].y);
	}
	cout << ans + b - a;
	return 0;
}