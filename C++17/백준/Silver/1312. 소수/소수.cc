#include <iostream>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int A, B, N; cin >> A >> B >> N;
	
	int ans = 0;
	for (int i = 0; i < N; i++) {
		A = (A % B) * 10;
		ans = A / B;
	}
	cout << ans;
	return 0;
}