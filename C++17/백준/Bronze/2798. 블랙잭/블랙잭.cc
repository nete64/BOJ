#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int arr[102];
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int N, M; cin >> N >> M;
	for (int i = 0; i < N; i++)
		cin >> arr[i];

	int ans = 0;
	for (int i = 0; i < N; i++) {
		for (int j = i + 1; j < N; j++) {
			for (int k = j + 1; k < N; k++) {
				if (arr[i] + arr[j] + arr[k] <= M) {
					if (ans <= M) {
						ans = max(ans, arr[i] + arr[j] + arr[k]);
					}
				}
			}
		}
	}
	cout << ans;
	return 0;
}