#include <iostream>
#include <string>
using namespace std;

int N;
string s[51];
bool is_same_all(int index)
{
	for (int j = 1; j < N; j++)
		if (s[0][index] != s[j][index])
			return false;

	return true;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	cin >> N;
	for (int i = 0; i < N; i++)
		cin >> s[i];
	
	for (int i = 0; i < s[0].length(); i++) {
		if (is_same_all(i)) {
			cout << s[0][i];
		}
		else {
			cout << "?";
		}
	}
	return 0;
}