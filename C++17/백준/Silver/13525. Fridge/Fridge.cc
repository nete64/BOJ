#include <iostream>
#include <string>
using namespace std;

int arr[11];
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	string s; cin >> s;
	for (int i = 0; i < s.size(); i++)
		arr[s[i] - '0']++;

	int mni, mn = 1002;
	for (int i = 1; i <= 9; i++) {
		if (mn > arr[i]) {
			mni = i;
			mn = arr[i];
		}
	}
	
	if (mn > arr[0]) {
		for (int i = 0; i < mn - arr[0]; i++) {
			cout << mni;
		}

		for (int i = 0; i < mn; i++) {
			cout << "0";
		}
	}
	else {
		for (int i = 0; i < arr[mni]; i++) {
			cout << mni;
		}
		cout << mni;
	}
	return 0;
}