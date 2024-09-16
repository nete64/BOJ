#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
using namespace std;

int arr[102];
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int L; cin >> L;
	string s; cin >> s;

	long long ans = 0;
	for (int i = 0; i < s.length(); i++) {
		long long m = 1;

		for (int j = 0; j < i; j++)
			m = (m * 31) % 1234567891;

		ans += (s[i] - 'a' + 1) * m;
	}
	cout << ans % 1234567891;

	return 0;
}