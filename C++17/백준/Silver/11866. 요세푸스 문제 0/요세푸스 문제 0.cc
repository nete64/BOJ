#include <iostream>
#include <string>
#include <queue>
#include <algorithm>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	queue<int> q;
	int N, K; cin >> N >> K;
	for (int i = 1; i <= N; i++)
		q.push(i);

	cout << "<";
	int i = 0;
	while (!q.empty()) {
		if (++i == K) {
			if (q.size() == 1)
				cout << q.front() << ">";
			else
				cout << q.front() << ", ";
			q.pop();
			i = 0;
		}
		else {
			q.push(q.front());
			q.pop();
		}
	}
	return 0;
}