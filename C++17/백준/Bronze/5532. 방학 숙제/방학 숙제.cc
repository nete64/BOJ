#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int L, A, B, C, D; cin >> L >> A >> B >> C >> D;
	cout << L - max(ceil((float)A / C), ceil((float)B / D));
	return 0;
}