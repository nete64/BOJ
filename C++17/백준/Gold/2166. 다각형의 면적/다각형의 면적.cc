#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
using namespace std;

vector<pair<int, int> > v;
double calc(int i, int j)
{
	double x1 = v[0].first; double y1 = v[0].second;
	double x2 = v[i].first; double y2 = v[i].second;
	double x3 = v[j].first; double y3 = v[j].second;

	return ( (x1 * y2 + x2 * y3 + x3 * y1) - (x2 * y1 + x3 * y2 + x1 * y3) );
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);

	int N; cin >> N;
	for (int i = 0; i < N; i++) {
		int x, y; cin >> x >> y;
		v.push_back({ x, y });
	}

	long double s = 0;
	for (int i = 1; i < N - 1; i++)
		s += calc(i, i + 1);

	cout << fixed;
	cout.precision(1);
	cout << abs(s * 0.5);
	return 0;
}