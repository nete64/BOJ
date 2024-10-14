#include <iostream>
#include <queue>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	priority_queue<int> pq;
	int N; cin >> N;
	while (N--) {
		int x; cin >> x;
		pq.push(x);
	}
	cout << pq.top();
	return 0;
}