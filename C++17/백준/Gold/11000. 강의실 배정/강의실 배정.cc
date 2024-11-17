#include <iostream>
#include <queue>
#include <algorithm>
#include <functional>
using namespace std;

struct P {
	int s, t;
};
bool cmp(P& a, P& b)
{
	return a.s < b.s;
}
P p[200002];
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int N; cin >> N;
	for (int i = 0; i < N; i++)
		cin >> p[i].s >> p[i].t;

	sort(p, p + N, cmp);

	priority_queue<int, vector<int>, greater<int> > wait;
	wait.push(p[0].t);
	for (int i = 1; i < N; i++) {
		if (!wait.empty() && p[i].s >= wait.top()) {
			wait.pop();
			wait.push(p[i].t);
		}
		else {
			wait.push(p[i].t);
		}
	}
	cout << wait.size();
	
	return 0;
}