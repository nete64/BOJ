#include <iostream>
#include <deque>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	
	deque<int> dq;
	int N; cin >> N;
	for (int i = 1; i <= N; i++)
		dq.push_back(i);

	while (!dq.empty()) {
		cout << dq.front() << " ";
		dq.pop_front();
		if (dq.empty())
			break;
		dq.push_back(dq.front());
		dq.pop_front();
	}
	return 0;
}