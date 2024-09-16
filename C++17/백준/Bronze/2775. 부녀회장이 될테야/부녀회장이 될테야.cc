#include <iostream>
using namespace std;

int arr[15][15];
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	for (int i = 0; i <= 14; i++) {
		for (int j = 1; j <= 14; j++) {
			if (i == 0)
				arr[i][j] = j;
			else {
				for (int k = 1; k <= j; k++)
					arr[i][j] += arr[i - 1][k];
			}
		}
	}

	int T; cin >> T;
	while (T--) {
		int k, n; cin >> k >> n;
		cout << arr[k][n] << '\n';
	}
	return 0;
}