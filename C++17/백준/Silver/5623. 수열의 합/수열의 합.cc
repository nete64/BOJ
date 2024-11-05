#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int arr[1002][1002];
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int N; cin >> N;
	for (int i = 0; i < N; i++)
		for (int j = 0; j < N; j++)
			cin >> arr[i][j];

	if (N == 2)
		cout << "1 1";
	else {
		int a = (arr[0][1] + arr[0][2] - arr[1][2]) / 2;
		for (int j = 0; j < N; j++) {
			cout << abs(a - arr[0][j]) << " ";
		}
	}
	return 0;
}