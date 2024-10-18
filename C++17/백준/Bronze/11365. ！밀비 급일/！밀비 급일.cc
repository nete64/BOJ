#include <iostream>
#include <string>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	while (true) {
		string s;
		getline(cin, s);
		
		if (s == "END")
			break;

		for (int i = s.size() - 1; i >= 0; i--)
			cout << s[i];
		cout << "\n";
	}
	return 0;
}