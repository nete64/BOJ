#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);

	vector<int> v;
	int A, B, N; cin >> A >> B >> N;
	for (int i = 0; i < N; i++) {
		int X; cin >> X;
		v.push_back(X);
	}

	int mn = abs(B - A);
	for (auto k : v)
		mn = min(mn, abs(B - k));

	if (mn != abs(B - A))
		mn++;
	cout << mn;
	return 0;
}