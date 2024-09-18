#include <iostream>
#include <vector>
#include <stack>
#include <algorithm>
using namespace std;

const int MAX = 100000;
int arr[MAX+2];
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	stack<int> st;
	vector<char> res;

	int n, k = 0; cin >> n;
	for (int i = 0; i < n; i++)
		cin >> arr[i];
	for (int i = 0; i < n; i++) {
		while (k < arr[i]) {
			st.push(++k);
			res.push_back('+');
		}
		if (st.top() == arr[i]) {
			st.pop();
			res.push_back('-');
		}
	}
	if (!st.empty())
		cout << "NO";
	else
		for (auto& e : res)
			cout << e << '\n';
	return 0;
}