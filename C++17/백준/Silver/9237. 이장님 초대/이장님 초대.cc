#include <iostream>
#include <algorithm>
using namespace std;

int t[100002];
bool cmp(int a, int b)
{
	return a > b;
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int N; cin >> N;
	int k = 1;
	for (int i = 0; i < N; i++) {
		cin >> t[i];
	}

	sort(t, t + N, cmp);
	for (int i = 0; i < N; i++)
		t[i] += (i + 1);

	sort(t, t + N, cmp);
	cout << t[0] + 1;
	return 0;
}