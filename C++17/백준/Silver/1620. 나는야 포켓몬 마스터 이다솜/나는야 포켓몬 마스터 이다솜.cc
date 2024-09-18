#include <iostream>
#include <string>
#include <unordered_map>
#include <algorithm>
using namespace std;

bool is_num(string& s)
{
	for (int i = 0; i < s.length(); i++) {
		if (!(s[i] >= '0' && s[i] <= '9'))
			return false;
	}
	return true;
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	unordered_map<string, int> mapByName;
	unordered_map<string, string> mapByNum;

	int N, M; cin >> N >> M;
	for (int i = 1; i <= N; i++) {
		string s; cin >> s;
		mapByName[s] = i;
		mapByNum[to_string(i)] = s;
	}

	for (int i = 0; i < M; i++) {
		string s; cin >> s;
		if (is_num(s))
			cout << mapByNum[s] << '\n';
		else
			cout << mapByName[s] << '\n';
	}

	return 0;
}