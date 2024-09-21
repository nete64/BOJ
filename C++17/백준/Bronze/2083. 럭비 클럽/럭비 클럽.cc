#include <iostream>
#include <string>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	while (true) {
		string s;
		int age, weight;
		cin >> s >> age >> weight;

		if (s[0] == '#' && age == 0 && weight == 0)
			break;

		if (age > 17 || weight >= 80)
			cout << s << " Senior\n";
		else
			cout << s << " Junior\n";
	}

	return 0;
}