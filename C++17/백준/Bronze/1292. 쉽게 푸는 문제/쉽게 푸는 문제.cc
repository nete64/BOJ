#include <iostream>
using namespace std;

int arr[1002];
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	
	int i = 1, j = 1, k = 1;
	while (true) {
		for (j = 1; j <= i; j++, k++) {
			arr[k] = i;
			if (k > 1000)
				break;
		}
		if (k > 1000)
			break;
		i++;
	}

	int ans = 0;
	int a, b; cin >> a >> b;
	for (int i = a; i <= b; i++)
		ans += arr[i];
	cout << ans;
	return 0;
}