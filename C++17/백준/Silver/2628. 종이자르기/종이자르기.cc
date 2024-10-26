#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);

	vector<int> v1, v2;
	int w, h, n; cin >> w >> h >> n;
	v1.push_back(w);
	v2.push_back(h);

	for (int i = 0; i < n; i++) {
		int a, b; cin >> a >> b;
		if (a == 0) v2.push_back(b);
		else v1.push_back(b);
	}
	
	sort(v1.begin(), v1.end());
	sort(v2.begin(), v2.end());

	int mxw = v1[0], mxh = v2[0];
	for (int i = 0; i < v1.size() - 1; i++)
		mxw = max(mxw, v1[i + 1] - v1[i]);
	for (int i = 0; i < v2.size() - 1; i++)
		mxh = max(mxh, v2[i + 1] - v2[i]);

	cout << mxw * mxh;
	return 0;
}