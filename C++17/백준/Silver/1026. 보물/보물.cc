#include <iostream>
#include <algorithm>
using namespace std;

int A[53], B[53];
bool cmp(int &a, int &b)
{
	return a > b;
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int N; cin >> N;
	for (int i = 0; i < N; i++)
		cin >> A[i];
	for (int i = 0; i < N; i++)
		cin >> B[i];
	sort(A, A + N, cmp);
	sort(B, B + N);
	
	int ans = 0;
	for (int i = 0; i < N; i++)
		ans += A[i] * B[i];
	cout << ans;
	return 0;
}