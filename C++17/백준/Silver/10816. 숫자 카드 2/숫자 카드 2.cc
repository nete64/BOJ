#include <iostream>
#include <string>
#include <unordered_map>
#include <algorithm>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	unordered_map<int, int> um;

	int N; cin >> N;
	for (int i = 0; i < N; i++) {
		int k; cin >> k;

		if (um.count(k) == 0)
			um[k] = 1;
		else
			um[k]++;
	}

	int M; cin >> M;
	for (int i = 0; i < M; i++) {
		int k; cin >> k;
		if (um.count(k) == 0)
			cout << "0 ";
		else
			cout << um[k] << " ";
	}

	return 0;
}