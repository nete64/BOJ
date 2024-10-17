#include <iostream>
using namespace std;

int arr[3];
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int sum = 0;
	int X, N; cin >> X >> N;
	for (int i = 0; i < N; i++) {
		int a, b; cin >> a >> b;
		sum += a * b;
	}
	if (sum == X)
		cout << "Yes";
	else
		cout << "No";
	return 0;
}