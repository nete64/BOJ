#include <iostream>
#include <string>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int N, M; cin >> N >> M;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			string s; cin >> s;
			for (int k = s.length() - 1; k >= 0; k--)
				cout << s[k];
			cout << '\n';
		}
	}

	return 0;
}