#include <iostream>
#include <string>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int N; cin >> N;
	cin.ignore();
	while (N--) {
		string s;
		getline(cin, s);
		if (islower(s[0]))
			s[0] = s[0] - 'a' + 'A';
		cout << s << "\n";
	}
	return 0;
}