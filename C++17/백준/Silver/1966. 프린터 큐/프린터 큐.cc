#include <iostream>
using namespace std;

const int MAX = 1000000;
int d[MAX+5], w[MAX+5];
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	for (int i = 0; i < 105; i++) {
		d[i] = w[i] = -1;
	}

	int T; cin >> T;
	while (T--) {
		int N, M; cin >> N >> M;
		int head = 0, tail = N;
		for (int i = 0; i < N; i++) {
			cin >> w[i];
			d[i] = i;
		}

		int ans = 0;
		while (head != tail) {
			int front = w[head];

			bool b = true;
			for (int i = head; i < tail; i++) {
				if (front < w[i]) {
					d[tail] = d[head];
					w[tail] = w[head];
					d[head] = w[head] = -1;
					tail++;
					b = false;
					break;
				}
			}

			if (b) {
				ans++;
			}
			if (d[head] == M) {
				cout << ans << '\n';
				d[head] = -1;
			}
			head++;
		}
	}

	return 0;
}