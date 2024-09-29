#include <iostream>
#include <string>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	string s1;
	while (getline(cin, s1)) {
		cout << s1 << '\n';
	}
	
	return 0;
}