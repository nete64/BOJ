#include <iostream>
#include <string>
#include <vector>
#include <unordered_set>
#include <algorithm>
using namespace std;

vector<string> v;
unordered_set<string> us;
bool cmp(string &a, string &b)
{
	return a > b;
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int n; cin >> n;
	while (n--) {
		string a, b; cin >> a >> b;
		if (b == "enter")
			us.insert(a);
		else if (b == "leave")
			us.erase(a);
	}

	for (auto& e : us)
		v.push_back(e);
	sort(v.begin(), v.end(), cmp);
	for (auto& e : v)
		cout << e << "\n";
	return 0;
}