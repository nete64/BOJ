#include <iostream>
#include <algorithm>
using namespace std;

int arr[5];
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	for (int i = 0; i < 5; i++)
		cin >> arr[i];
	
	while ( !(arr[0] == 1 && arr[1] == 2 && arr[2] == 3 && arr[3] == 4 && arr[4] == 5) ) {
		for (int i = 0; i < 4; i++)
			if (arr[i] > arr[i + 1]) {
				swap(arr[i], arr[i + 1]);
				cout << arr[0] << " " << arr[1] << " " << arr[2] << " " << arr[3] << " " << arr[4] << "\n";
			}
	}
	return 0;
}