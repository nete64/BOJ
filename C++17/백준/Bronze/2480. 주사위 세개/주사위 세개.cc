#include <iostream>
#include <algorithm>
using namespace std;

int arr[3];
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	cin >> arr[0] >> arr[1] >> arr[2];
	sort(arr, arr + 3);
	if (arr[0] == arr[1] && arr[1] == arr[2])
		cout << 10000 + arr[0] * 1000;
	else if ( (arr[0] == arr[1] && arr[1] != arr[2]) ||
			  (arr[0] != arr[1] && arr[1] == arr[2]))
		cout << 1000 + arr[1] * 100;
	else
		cout << 100 * max(arr[0], max(arr[1], arr[2]));
	return 0;
}