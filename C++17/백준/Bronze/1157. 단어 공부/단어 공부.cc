#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int arr[27], mx_cnt, mx_idx;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	string s; cin >> s;
	for (int i = 0; i < s.length(); i++) {
		if (isupper(s[i]))
			arr[s[i] - 'A']++;
		else
			arr[s[i] - 'a']++;
	}

	for (int i = 0; i < 26; i++)
		mx_cnt = max(mx_cnt, arr[i]);

	int cnt = 0;
	for (int i = 0; i < 26; i++) {
		if (arr[i] == mx_cnt) {
			cnt++;
			mx_idx = i;
		}
	}

	if (cnt > 1)
		cout << "?";
	else
		cout << (char)(mx_idx + 'A');

	return 0;
}