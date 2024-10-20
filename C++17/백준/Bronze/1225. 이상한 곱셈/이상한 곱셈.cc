#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);

	string A, B; cin >> A >> B;

	long long ans = 0;
	for (auto& b : B) {
		for (auto& a : A) {
			ans += (a - '0') * (b - '0');
		}
	}
	cout << ans;
	return 0;
}