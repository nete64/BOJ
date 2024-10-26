#include <iostream>
#include <string>
using namespace std;

int arr[27], odd;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	string s; cin >> s;
	string ans = s;
	for (int i = 0; i < s.size(); i++)
		arr[s[i] - 'A']++;

	for (int i = 0; i < 26; i++)
		if (arr[i] % 2 == 1)
			odd++;

	if (odd >= 2)
		cout << "I'm Sorry Hansoo";
	else {
		int k = 0;
		for (int i = 0; i < 26; i++) {
			if (arr[i] % 2 == 1) {
				ans[ans.size() / 2] = 'A' + i;
				arr[i]--;
			}

			while (arr[i] > 0) {
				arr[i]--;

				if (k % 2 == 0)
					ans[k / 2] = 'A' + i;
				else
					ans[ans.size() - (k / 2) - 1] = 'A' + i;
				k++;
			}
		}
		cout << ans;
	}
	return 0;
}