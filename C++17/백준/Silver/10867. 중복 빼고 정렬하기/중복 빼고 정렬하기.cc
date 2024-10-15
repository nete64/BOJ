#include <iostream>
using namespace std;

int arr[100001], c[4000];
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int N; cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> arr[i];
		c[arr[i] + 1001]++;
	}

	for (int i = 0; i < 2002; i++)
		if (c[i] > 0)
			cout << i - 1001 << " ";
	return 0;
}