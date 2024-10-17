#include <iostream>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int K, N, M; cin >> K >> N >> M;
	if (M > K * N)
		cout << "0";
	else
		cout << K * N - M;
	return 0;
}