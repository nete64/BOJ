#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int N, P; cin >> N >> P;
	int ans = P;
	if (N >= 5)
		ans = min(ans, P - 500);
	if (N >= 10)
		ans = min(ans, (int)(P * 0.9));
	if (N >= 15)
		ans = min(ans, P - 2000);
	if (N >= 20)
		ans = min(ans, (int)(P * 0.75));
	cout << max(0, ans);
	return 0;
}