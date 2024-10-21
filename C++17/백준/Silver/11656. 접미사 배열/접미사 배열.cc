#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

string arr[1002];
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);

	string S; cin >> S;
	for (int i = 0; i < S.size(); i++) {
		arr[i] = S.substr(i, S.size() - i);
	}
	sort(arr, arr + S.size());
	for (int i = 0; i < S.size(); i++)
		cout << arr[i] << "\n";
	return 0;
}