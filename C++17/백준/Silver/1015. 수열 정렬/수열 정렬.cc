#include <iostream>
#include <algorithm>
using namespace std;

int raw[51], sorted[51];
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int N; cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> raw[i];
		sorted[i] = raw[i];
	}

	sort(sorted, sorted + N);

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			if (raw[i] == sorted[j]) {
				cout << j << " ";
				sorted[j] = -1;
				break;
			}
		}
	}
	return 0;
}