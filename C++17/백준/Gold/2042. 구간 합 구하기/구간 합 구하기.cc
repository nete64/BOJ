#include <iostream>
#include <cstring>
#include <cstdio>
using namespace std;

const int MAX = 2500000;
int N, M, K, start;
long long arr[MAX];
void construct()
{
	for (int i = start - 1; i > 0; i--)
		arr[i] = arr[i * 2] + arr[i * 2 + 1];
}

long long sum(int L, int R, int nodeNum, int nodeL, int nodeR)
{
	if (R <= nodeL || nodeR <= L) return 0;
	if (L <= nodeL && nodeR <= R) return arr[nodeNum];
	int mid = (nodeL + nodeR) / 2;
	return sum(L, R, nodeNum * 2, nodeL, mid) + sum(L, R, nodeNum * 2 + 1, mid, nodeR);
}

void update(int a, long long b)
{
	a += start;
	b -= arr[a];
	while (a > 0) {
		arr[a] += b;
		a /= 2;
	}
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	cin >> N >> M >> K;
	start = 1;
	while(start < N) start *= 2;
	memset(arr, 0, sizeof(arr));

	for (int i = 0; i < N; i++)
		cin >> arr[start + i];
	
	construct();
	for (int i = 0; i < M + K; i++) {
		int a;
		cin >> a;
		if (a == 1) {
			int b;
			long long c;
			cin >> b >> c;
			update(b - 1, c);
		} else {
			int b, c;
			cin >> b >> c;
			cout << sum(b - 1, c, 1, 0, start) << '\n';
		}
	}
	return 0;
}