#include <iostream>
#include <iomanip>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	string str; cin >> str;
	int m = stoi(str.substr(0, 2));
	int s = stoi(str.substr(3, 2));
	int bt = m * 3600 + s * 60;
	int st = m * 60 + s;
	int t = bt - st;
	int ah = t / 3600;
	int am = t % 3600 / 60;
	int as = t % 60;

	cout.width(2);
	cout.fill('0');
	cout << ah << ":";
	cout.width(2);
	cout << am << ":";
	cout.width(2);
	cout << as;
	return 0;
}