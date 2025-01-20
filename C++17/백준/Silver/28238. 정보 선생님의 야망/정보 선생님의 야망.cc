#include <iostream>
#include <algorithm>
using namespace std;

int arr[1000002][5];
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int n; cin >> n;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < 5; j++)
			cin >> arr[i][j];

	int mx = -1, a, b;
	for (int i = 0; i < 5; i++) {
		for (int j = i + 1; j < 5; j++) {
			int w = 0;
			for (int k = 0; k < n; k++) {
				if (arr[k][i] == 1 && arr[k][j] == 1) {
					w++;
				}
			}

			if (w > mx) {
				mx = w;
				a = i;
				b = j;
			}
		}
	}

	cout << mx << "\n";
	for (int i = 0; i < 5; i++) {
		if (i == a || i == b)
			cout << "1 ";
		else
			cout << "0 ";
	}
	
	return 0;
}