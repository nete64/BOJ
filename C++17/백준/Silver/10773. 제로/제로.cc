#include <iostream>
#include <stack>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	stack<int> st;
	int K; cin >> K;
	while (K--) {
		int N; cin >> N;
		if (N == 0) st.pop();
		else st.push(N);
	}

	int ans = 0;
	while (!st.empty()) {
		ans += st.top();
		st.pop();
	}
	cout << ans;

	return 0;
}