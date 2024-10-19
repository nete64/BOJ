#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);

    unordered_map<char, char> um;
    um['I'] = 'E'; um['E'] = 'I';
    um['N'] = 'S'; um['S'] = 'N';
    um['T'] = 'F'; um['F'] = 'T';
    um['P'] = 'J'; um['J'] = 'P';

	string s; cin >> s;
    cout << um[s[0]] << um[s[1]] << um[s[2]] << um[s[3]];
	return 0;
}