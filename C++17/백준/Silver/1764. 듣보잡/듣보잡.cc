#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	unordered_map<string, int> m;
	int N, M; cin >> N >> M;
	for (int i = 0; i < N; i++) {
		string s; cin >> s;
		if (m.count(s) == 0)
			m[s] = 1;
		else
			m[s]++;
	}
	for (int i = 0; i < M; i++) {
		string s; cin >> s;
		if (m.count(s) == 0)
			m[s] = 1;
		else
			m[s]++;
	}

	vector<string> v;
	for (auto& e : m) {
		if (e.second == 2)
			v.push_back(e.first);
	}
	sort(v.begin(), v.end());
	cout << v.size() << '\n';
	for (auto& e : v)
		cout << e << '\n';

	return 0;
}