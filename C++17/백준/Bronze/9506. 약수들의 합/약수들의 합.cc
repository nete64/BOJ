#include <iostream>
using namespace std;

int arr[100001];
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int N;

	while (true) {
		int sum = 0, j = 0;
		cin >> N;
		if (N == -1)
			break;

		for (int i = 1; i < N; i++) {
			if (N % i == 0) {
				sum += i;
				arr[j++] = i;
			}
		}
		
		if (sum == N) {
			cout << N << " = ";
			for (int i = 0; i < j; i++) {
				if (i == j - 1)
					cout << arr[i] << '\n';
				else
					cout << arr[i] << " + ";
			}
		}
		else {
			cout << N << " is NOT perfect.\n";
		}
	}
	return 0;
}