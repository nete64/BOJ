#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Node {
	int parent;
	vector<int> children;
};
int ans;
Node node[52];
void trav(int x)
{
	if (node[x].children.size() == 0) {
		ans++;
		return;
	}

	for (auto e : node[x].children) {
		trav(e);
	}
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int rt = 0;
	int N; cin >> N;
	for (int i = 0; i < N; i++) {
		int X; cin >> X;
		if (X != -1) {
			node[X].children.push_back(i);
			node[i].parent = X;
		}
		else
			rt = i;
	}

	int K; cin >> K;
	int p = node[K].parent;
	auto& v = node[p].children;
	v.erase(remove(v.begin(), v.end(), K), v.end());

	if (K != rt)
		trav(rt);

	cout << ans;
	return 0;
}