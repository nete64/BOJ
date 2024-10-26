#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

struct Book {
	string name;
	int cnt;
};
bool cmp(Book& a, Book& b)
{
	if (a.cnt == b.cnt)
		return a.name < b.name;
	return a.cnt > b.cnt;
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);

	vector<Book> v;

	int N; cin >> N;
	for (int i = 0; i < N; i++) {
		string s; cin >> s;
		int b = -1;
		for (int j = 0; j < v.size(); j++)
			if (s == v[j].name) {
				b = j;
				break;
			}
		if (b == -1)
			v.push_back({ s, 0 });
		else
			v[b].cnt++;
	}
	sort(v.begin(), v.end(), cmp);
	cout << v[0].name;
	return 0;
}