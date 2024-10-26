#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

struct P {
	int team;
	int cnt;
	string name;
};
bool cmp(P& a, P& b)
{
	if (a.team % 2 == b.team % 2) {
		if (a.team == b.team) {
			if (a.name.size() == b.name.size())
				return a.name < b.name;
			return a.name.size() < b.name.size();
		}
		return a.team < b.team;
	}
	else {
		return (a.team % 2) > (b.team % 2);
	}
}
int arr[502];
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);

	int N, M; cin >> N >> M;
	vector<P> v;

	while (true) {
		int a; string b;
		cin >> a >> b;

		if (a == 0 && b[0] == '0')
			break;

		if (arr[a] <= M - 1) {
			arr[a]++;
			v.push_back({ a, arr[a], b });
		}
	}
	sort(v.begin(), v.end(), cmp);
	for (auto& e : v)
		cout << e.team << " " << e.name << "\n";
	return 0;
}