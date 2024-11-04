#include <iostream>
#include <algorithm>
using namespace std;

bool r[103];
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
    
	int N, M; cin >> N >> M;
	for (int i = 0; i < M; i++) {
		int x, y; cin >> x >> y;
		for (int j = x; j < y; j++)
			r[j] = true;
	}

	int ans = 0;
	for (int i = 0; i < N; i++) {
		if ((r[i] && !r[i + 1]) || (!r[i] && !r[i + 1])) {
			ans++;
		}
	}
	cout << ans;
	return 0;
}