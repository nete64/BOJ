#include <iostream>
#include <string>
using namespace std;

struct P {
	int i, r;
};
P p[12];
string s[52];
int ans[10];
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int R, C; cin >> R >> C;
	for (int i = 0; i < R; i++)
		cin >> s[i];

	for (int i = 0; i < R; i++) {
		for (int j = C - 1; j > 0; j--) {
			if (s[i][j] >= '1' && s[i][j] <= '9') {
				int n = s[i][j] - '0';
				p[n].i = n;
				p[n].r = C - j;
				break;
			}
		}
	}
	for (int i = 1; i <= 9; i++) {
		if (p[i].i == 0) {
			p[i].i = i;
			p[i].r = 1000000;
		}
	}

	int w = 123456789;
	for (int i = 1; i <= 9; i++) {
		w = 123456789;
		for (int j = 1; j <= 9; j++)
			w = min(w, p[j].r);

		for (int j = 1; j <= 9; j++) {
			if (p[j].r != 123456789 && p[j].r == w) {
				ans[j] = i;
				p[j].r = 123456789;
			}
		}
	}

	for (int i = 1; i <= 9; i++)
		cout << ans[i] << "\n";

	return 0;
}