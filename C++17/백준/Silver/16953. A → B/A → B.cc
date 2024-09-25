#include <iostream>
#include <queue>
#include <unordered_map>
using namespace std;

const int MAX = 1000000002;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int A, B; cin >> A >> B;

	queue<pair<int, int> > q;
	unordered_map<long long, int> um;
	q.push({ A, 1 });
	while (!q.empty()) {
		int num = q.front().first;
		int len = q.front().second;
		q.pop();

		if (num == B) {
			cout << len;
			return 0;
		}

		if (num * 2 < MAX && um.count(num * 2) == 0) {
			q.push({ num * 2, len + 1 });
			um[num * 2] = 1;
		}

		long long k = (long long)num * 10 + 1;
		if (k < MAX && um.count(k) == 0) {
			q.push({ k, len + 1 });
			um[k] = 1;
		}
	}
	cout << "-1";
	return 0;
}