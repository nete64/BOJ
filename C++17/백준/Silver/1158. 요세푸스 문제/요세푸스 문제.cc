#include <iostream>
#include <queue>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int N, K; cin >> N >> K;

	queue<int> q;
	for (int i = 1; i <= N; i++)
		q.push(i);
	
	while (!q.empty()) {
		for (int i = 1; i <= K - 1; i++) {
			q.push(q.front());
			q.pop();
		}
		if (q.size() == N)
			cout << "<" << q.front();
		else
			cout << ", " << q.front();
		if (q.size() == 1)
			cout << ">";

		q.pop();
	}
	return 0;
}