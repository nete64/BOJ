#include <iostream>
#include <algorithm>
#include <unordered_set>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	unordered_set<int> us;
	int N; cin >> N;
	for (int i = 0; i < N; i++) {
		int k; cin >> k;
		us.insert(k);
	}
	int M; cin >> M;
	for (int i = 0; i < M; i++) {
		int k; cin >> k;
		cout << (us.count(k) > 0) << '\n';
	}

	return 0;
}