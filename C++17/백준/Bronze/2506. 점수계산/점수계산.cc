#include <iostream>
using namespace std;

int arr[102];
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int N; cin >> N;
	for (int i = 0; i < N; i++)
		cin >> arr[i];

	int x = 0;
	int ans = 0;
	for (int i = 0; i < N; i++) {
		if (arr[i] == 1)
			x++;
		else
			x = 0;
		ans += x;
	}
	cout << ans;
	return 0;
}