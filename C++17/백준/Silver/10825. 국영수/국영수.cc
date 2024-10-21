#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

struct P {
	string name;
	int ko, en, ma;
};
P p[100002];
bool cmp(P& a, P& b)
{
	if (a.ko == b.ko && a.en == b.en && a.ma == b.ma)
		return a.name < b.name;
	else if (a.ko == b.ko && a.en == b.en)
		return a.ma > b.ma;
	else if (a.ko == b.ko)
		return a.en < b.en;
	return a.ko > b.ko;
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);

	int N; cin >> N;
	for (int i = 0; i < N; i++)
		cin >> p[i].name >> p[i].ko >> p[i].en >> p[i].ma;

	sort(p, p + N, cmp);
	for (int i = 0; i < N; i++)
		cout << p[i].name << "\n";
	return 0;
}