#include <iostream>
#include <algorithm>
using namespace std;

int C[2000002];
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int N, M; cin >> N >> M;
	int k = 0;
	for (int i = 0; i < N + M; i++) {
		int x; cin >> x;
		C[k++] = x;
	}
	sort(C, C + k);
	for (int i = 0; i < k; i++)
		cout << C[i] << " ";
	return 0;
}