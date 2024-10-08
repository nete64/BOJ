#include <iostream>
#include <string>
#include <regex>
using namespace std;

string s[] = { "c=", "c-", "dz=", "d-", "lj", "nj", "s=", "z=" };
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	
	string a, b; cin >> a;
	for (int i = 0; i < sizeof(s)/sizeof(s[0]); i++)
		a = regex_replace(a, regex(s[i]), ".");

	cout << a.length();
	
	return 0;
}