#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
using namespace std;

int arr[10], ans;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	string s; cin >> s;
	for (int i = 0; i < s.length(); i++)
		if (s[i] == '9')
			s[i] = '6';

	for (int i = 0; i < s.length(); i++)
		arr[s[i] - '0']++;

	arr[6] = ceil(arr[6] / 2.0);

	for (int i = 0; i <= 9; i++)
		ans = max(ans, arr[i]);

	cout << ans;
	return 0;
}