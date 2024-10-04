#include <iostream>
#include <unordered_set>
#include <algorithm>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	unordered_set<int> us;

	int N; cin >> N;
	while (N--) {
		int X; cin >> X;
		us.insert(X);
	}

	int M; cin >> M;
	while (M--) {
		int X; cin >> X;
		cout << us.count(X) << " ";
	}
	return 0;
}