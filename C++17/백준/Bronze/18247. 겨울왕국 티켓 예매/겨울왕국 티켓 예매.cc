#include <iostream>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int T; cin >> T;
	while (T--) {
		int N, M; cin >> N >> M;
		if (N < 12 || M < 4)
			cout << "-1\n";
		else
			cout << 11 * M + 4 << "\n";
	}
	return 0;
}