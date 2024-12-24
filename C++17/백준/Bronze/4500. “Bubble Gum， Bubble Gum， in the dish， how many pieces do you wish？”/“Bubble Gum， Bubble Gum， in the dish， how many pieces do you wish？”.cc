#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <unordered_map>
using namespace std;

vector<string> split(string str, char Delimiter)
{
	istringstream iss(str);
	string buffer;

	vector<string> result;

	while (getline(iss, buffer, Delimiter)) {
		result.push_back(buffer);
	}

	return result;
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int T; cin >> T;
	while (T--) {
		cin.ignore();
		string s;
		getline(cin, s);
		vector<string> v = split(s, ' ');

		unordered_map<string, int> um;
		for (int i = 0; i < v.size(); i++)
			um[v[i]] = i;

		string w; cin >> w;
		int k; cin >> k;
		cout << v[(um[w] + k - 1) % v.size()] << "\n";
	}
	return 0;
}