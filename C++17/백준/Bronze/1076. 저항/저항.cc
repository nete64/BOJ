#include <iostream>
#include <string>
#include <map>
#include <cmath>
#include <algorithm>
using namespace std;

map<string, int> m1;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	m1["black"] = 0;
	m1["brown"] = 1;
	m1["red"] = 2;
	m1["orange"] = 3;
	m1["yellow"] = 4;
	m1["green"] = 5;
	m1["blue"] = 6;
	m1["violet"] = 7;
	m1["grey"] = 8;
	m1["white"] = 9;

	string a, b, c; cin >> a >> b >> c;
	cout << (m1[a] * 10 + m1[b]) * (unsigned long long)pow(10, m1[c]);
	return 0;
}