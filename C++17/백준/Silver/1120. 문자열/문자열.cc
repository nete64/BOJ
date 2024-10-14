#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	string a, b; cin >> a >> b;

	if (a.size() > b.size())
		swap(a, b);

	int dif = b.size() - a.size();
	int ans = 0;
	for (int i = 0; i <= dif; i++) {
		int cnt = 0;
		for (int j = 0; j < a.size(); j++) {
			if (a[j] == b[i + j]) {
				cnt++;
			}
			ans = max(ans, cnt);
		}
	}
	cout << a.size() - ans;
	return 0;
}