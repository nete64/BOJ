#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
const int MAX = 1000000000;

vector<int> vv, tmpv;
int N, arr[16][6], ans = MAX;
int mp, mf, ms, mv;
void bt(int i, int p, int f, int s, int v, int c)
{
	if (i == N) {
		if (p >= mp && f >= mf && s >= ms && v >= mv) {
			if (ans > c) {
				ans = c;
				vv = tmpv;
			}
			else if (ans == c && vv > tmpv) {
				vv = tmpv;
			}
		}
		return;
	}

	bt(i + 1, p, f, s, v, c);
	tmpv.push_back(i + 1);
	bt(i + 1, p + arr[i][0], f + arr[i][1], s + arr[i][2], v + arr[i][3], c + arr[i][4]);
	tmpv.pop_back();
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	cin >> N;
	cin >> mp >> mf >> ms >> mv;

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < 5; j++) {
			cin >> arr[i][j];
		}
	}
	
	bt(0, 0, 0, 0, 0, 0);

	if (ans == MAX)
		cout << "-1";
	else {
		cout << ans << "\n";
		for (auto& e : vv)
			cout << e << " ";
	}
	
	return 0;
}