#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int N; cin >> N;
	int maxx = -1234567890, minn = 1234567890;
	for (int i = 0; i < N; i++) {
		int X; cin >> X;
		minn = min(minn, X);
		maxx = max(maxx, X);
	}
	cout << minn * maxx;
	
	return 0;
}