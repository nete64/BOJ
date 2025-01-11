#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;
using ll = long long;

ll arr[33000];
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int T; cin >> T;
	for (int i = 1; i <= T; i++)
		cin >> arr[i];

	ll s = 0;
	for (int i = 0; i <= T; i++) {
		s += arr[i] * 2 + 2;
		s += abs(arr[i] - arr[i + 1]);
	}
	cout << s - 2;
	return 0;
}