#include <iostream>
#include <algorithm>
using namespace std;

int arr[1002];
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int T; cin >> T;
	while (T--) {
		int N; cin >> N;
		
		int s = 0;
		for (int i = 0; i < N; i++) {
			int X; cin >> X;
			s += X;
			arr[i] = s;
		}
		
		int ans = -1e9;
		for (int i = 0; i < N; i++) {
			for (int j = -1; j < i; j++) {
				if (j < 0)
					ans = max(ans, arr[i]);
				else
					ans = max(ans, arr[i] - arr[j]);
			}
		}
		cout << ans << "\n";
	}
	return 0;
}