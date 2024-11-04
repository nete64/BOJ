#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	vector<pair<int, int> > v;
	int N, W, P; cin >> N >> W >> P;
	for (int i = 0; i < N; i++) {
		int X; cin >> X;
		v.push_back({1, X});
	}

	for (int i = 0; i < N; i++)
		for (int j = 0; j < N; j++)
			if (v[i].second < v[j].second)
				v[i].first++;
	
	if (!v.empty() && v.back().second >= W && v.size() >= P)
		cout << "-1";
	else {
		v.push_back({1, W});
		for (int i = 0; i < N; i++)
			if (v.back().second < v[i].second)
				v.back().first++;
		cout << v.back().first;
	}
	return 0;
}