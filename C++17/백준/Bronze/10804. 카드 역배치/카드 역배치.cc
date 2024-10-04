#include <iostream>
#include <algorithm>
using namespace std;

int arr[21];
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	for (int i = 1; i <= 20; i++)
		arr[i] = i;

	for (int i = 0; i < 10; i++) {
		int a, b; cin >> a >> b;
		for (int j = 0; j <= (b - a) / 2; j++)
			swap(arr[a + j], arr[b - j]);
	}
	
	for (int i = 1; i <= 20; i++)
		cout << arr[i] << " ";

	return 0;
}