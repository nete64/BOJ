#include <iostream>
#include <algorithm>
using namespace std;

int arr[2];
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	for (int i = 0; i < 3; i++) {
		fill(arr, arr + 2, 0);
		for (int j = 0; j < 4; j++) {
			int X; cin >> X;
			arr[X]++;
		}
		if (arr[1] == 3)
			cout << "A\n";
		else if (arr[1] == 2)
			cout << "B\n";
		else if (arr[1] == 1)
			cout << "C\n";
		else if (arr[1] == 0)
			cout << "D\n";
		else if (arr[1] == 4)
			cout << "E\n";
	}

	return 0;
}