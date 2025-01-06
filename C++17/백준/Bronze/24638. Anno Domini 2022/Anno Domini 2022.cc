#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	string a, b, c, d; cin >> a >> b >> c >> d;
	if (a == "AD" && c == "AD")
		cout << abs(stoi(b) - stoi(d));
	else if (b == "BC" && d == "BC")
		cout << abs(stoi(a) - stoi(c));
	else if (a == "AD" && d == "BC")
		cout << abs(stoi(b) + stoi(c)) - 1;
	else
		cout << abs(stoi(a) + stoi(d)) - 1;
	return 0;
}