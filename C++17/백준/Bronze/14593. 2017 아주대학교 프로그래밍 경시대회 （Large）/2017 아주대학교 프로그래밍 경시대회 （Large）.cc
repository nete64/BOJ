#include <iostream>
#include <algorithm>
using namespace std;

struct P {
	int i, S, C, L;
};
bool cmp(P& a, P& b)
{
	if (a.S == b.S) {
		if (a.C == b.C)
			return a.L < b.L;
		else
			return a.C < b.C;
	}
	return a.S > b.S;
}
P p[10002];
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int N; cin >> N;
	for (int i = 0; i < N; i++) {
		p[i].i = i + 1;
		cin >> p[i].S >> p[i].C >> p[i].L;
	}
	sort(p, p + N, cmp);
	cout << p[0].i;
	return 0;
}