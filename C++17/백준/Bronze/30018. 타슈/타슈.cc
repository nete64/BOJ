#include <iostream>
using namespace std;

int a[102], b[102];
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int N; cin >> N;
	for (int i = 0; i < N; i++)
		cin >> a[i];
	for (int i = 0; i < N; i++)
		cin >> b[i];

	int ans = 0;
	for (int i = 0; i < N; i++)
		if (a[i] > b[i])
			ans += a[i] - b[i];

	cout << ans;
	return 0;
}