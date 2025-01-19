#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> A, B, C;
queue<pair<int, int> > q;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int N; cin >> N;

	for (int i = 0; i < N; i++) {
		int k; cin >> k;
		if (k == 1) {
			int a, b; cin >> a >> b;
			q.push({ a, b });
		}
		else {
			int b; cin >> b;
			if (q.front().second == b)
				A.push_back(q.front().first);
			else
				B.push_back(q.front().first);
			q.pop();
		}
	}
	while (!q.empty()) {
		C.push_back(q.front().first);
		q.pop();
	}

	sort(A.begin(), A.end());
	sort(B.begin(), B.end());
	sort(C.begin(), C.end());

	if (A.size() == 0)
		cout << "None";
	else
		for (auto e : A)
			cout << e << " ";
	cout << "\n";

	if (B.size() == 0)
		cout << "None";
	else
		for (auto e : B)
			cout << e << " ";
	cout << "\n";

	if (C.size() == 0)
		cout << "None";
	else
		for (auto e : C)
			cout << e << " ";
	return 0;
}