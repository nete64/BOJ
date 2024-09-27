#include <iostream>
#include <algorithm>
using namespace std;

string arr[100001];
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	string s; cin >> s;
	int index = 0;
	for (int i = 0; i < s.length() - 1; i++) {
		for (int j = i + 1; j < s.length(); j++) {
			if (j + 1 >= s.length())
				continue;
			for (int k = i; k >= 0; k--)
				arr[index] += s[k];
			for (int k = j; k > i; k--)
				arr[index] += s[k];
			for (int k = s.length() - 1; k > j; k--)
				arr[index] += s[k];
			index++;
		}
	}
	sort(arr, arr + index);
	cout << arr[0];
	return 0;
}