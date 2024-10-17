#include <iostream>
#include <algorithm>
using namespace std;

int arr[3];
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	for (int i = 0; i < 3; i++)
		cin >> arr[i];

	sort(arr, arr + 3);
	int sum = arr[0] + arr[1] + arr[2];
	if (arr[0] == 60 && arr[1] == 60 && arr[2] == 60)
		cout << "Equilateral";
	else if (sum == 180 && (arr[0] == arr[1] || arr[1] == arr[2]))
		cout << "Isosceles";
	else if (sum == 180 && arr[0] != arr[1] && arr[1] != arr[2])
		cout << "Scalene";
	else
		cout << "Error";
	
	return 0;
}