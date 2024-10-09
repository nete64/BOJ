#include <iostream>
#include <string>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	
	int T; cin >> T;
	while (T--) {
		string s; cin >> s;
		float W1, W2, B; cin >> W1 >> W2 >> B;

		float in_00 = B;
		float in_01 = W2 + B;
		float in_10 = W1 + B;
		float in_11 = W1 + W2 + B;
		if (s == "AND") {
			if (in_00 < 0 && in_01 < 0 && in_10 < 0 && in_11 >= 0)
				cout << "true\n";
			else
				cout << "false\n";
		}
		else {
			if (in_00 < 0 && in_01 >= 0 && in_10 >= 0 && in_11 >= 0)
				cout << "true\n";
			else
				cout << "false\n";
		}
	}
	return 0;
}