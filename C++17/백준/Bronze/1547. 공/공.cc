#include <iostream>
#include <algorithm>
using namespace std;

int arr[4];
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	arr[1] = 1;
	int M; cin >> M;
	for (int i = 0; i < M; i++) {
		int X, Y; cin >> X >> Y;
		swap(arr[X], arr[Y]);
	}
	for (int i = 1; i <= 3; i++)
		if (arr[i] == 1)
			cout << i;

	return 0;
}