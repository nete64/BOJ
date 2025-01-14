#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int N, M, K; cin >> N >> M >> K;
	
	vector<string> v;
	for (int i = 0; i < N; i++) {
		string s; cin >> s;
		v.push_back(s);
	}

	sort(v.begin(), v.end());

	string ans = "";
	for (int i = 0; i < K; i++)
		ans += v[i];

	sort(ans.begin(), ans.end());
	cout << ans;
	return 0;
}