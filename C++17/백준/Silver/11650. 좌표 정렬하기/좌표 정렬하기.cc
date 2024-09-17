#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

struct Point {
	int x, y;
};

bool cmp(Point& a, Point& b)
{
	if (a.x == b.x)
		return a.y < b.y;
	return a.x < b.x;
}

Point p[100001];
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int N; cin >> N;
	for (int i = 0; i < N; i++)
		cin >> p[i].x >> p[i].y;

	sort(p, p + N, cmp);
	
	for (int i = 0; i < N; i++) {
		cout << p[i].x << " " << p[i].y << "\n";
	}

	return 0;
}