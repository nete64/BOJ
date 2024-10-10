#include <iostream>
using namespace std;

int arr[] = { 1,1,2,2,2,8 };
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	for (int i = 0; i < 6; i++) {
		int x; cin >> x;
		cout << arr[i] - x << " ";
	}
}