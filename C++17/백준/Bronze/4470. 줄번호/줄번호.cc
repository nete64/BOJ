#include <iostream>
#include <string>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int N; cin >> N;
	string s;
	getline(cin, s);
	for (int i = 1; i <= N; i++) {
		string s;
		getline(cin, s);
		cout << i << ". " << s << "\n";
	}
	return 0;
}