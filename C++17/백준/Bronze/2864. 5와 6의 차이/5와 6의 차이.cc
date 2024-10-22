#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);

	string a, b; cin >> a >> b;
	for (auto& c : a)
		if (c == '5')
			c = '6';
	for (auto& c : b)
		if (c == '5')
			c = '6';

	int n = stoi(a) + stoi(b);

	for (auto& c : a)
		if (c == '6')
			c = '5';
	for (auto& c : b)
		if (c == '6')
			c = '5';

	int m = stoi(a) + stoi(b);
	cout << m << " " << n;
	return 0;
}