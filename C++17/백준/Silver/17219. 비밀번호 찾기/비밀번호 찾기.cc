#include <iostream>
#include <string>
#include <unordered_map>
#include <algorithm>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	unordered_map<string, string> um;
	int N, M; cin >> N >> M;
	for (int i = 0; i < N; i++) {
		string a, b; cin >> a >> b;
		um[a] = b;
	}
	for (int i = 0; i < M; i++) {
		string s; cin >> s;
		cout << um[s] << '\n';
	}

	return 0;
}