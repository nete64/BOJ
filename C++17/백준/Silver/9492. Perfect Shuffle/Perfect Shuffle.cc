#include <iostream>
#include <string>
#include <queue>
#include <cmath>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	while (true) {
		int N; cin >> N;

		if (N == 0)
			break;

		queue<string> a, b;
		for (int i = 0; i < (int)ceil(N / 2.0f); i++) {
			string s; cin >> s;
			a.push(s);
		}

		for (int i = 0; i < N - (int)ceil(N / 2.0f); i++) {
			string s; cin >> s;
			b.push(s);
		}

		while (true) {
			if (!a.empty()) {
				cout << a.front() << "\n";
				a.pop();
			}
			if (!b.empty()) {
				cout << b.front() << "\n";
				b.pop();
			}
			if (a.empty() && b.empty())
				break;
		}
	}
	return 0;
}