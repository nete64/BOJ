#include <iostream>
#include <cstring>
#include <cstdio>
using namespace std;

const int START = 1048576;
const int SIZE = START * 2;
const long long MOD = 1000000007;

int N, M, K;
long long arr[SIZE];
long long mul(int L, int R, int nodeNum, int nodeL, int nodeR)
{
	if (R <= nodeL || nodeR <= L) return 1;
	if (L <= nodeL && nodeR <= R) return arr[nodeNum];
	int mid = (nodeL + nodeR) / 2;
	return mul(L, R, nodeNum * 2, nodeL, mid) * mul(L, R, nodeNum * 2 + 1, mid, nodeR) % MOD;
}

void update(int a)
{
	if (a == 1) return;
	arr[a] = arr[a * 2] * arr[a * 2 + 1] % MOD;
	update(a / 2);
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	cin >> N >> M >> K;
	fill(arr, arr + SIZE, 1);

	for (int i = 0; i < N; i++) {
		cin >> arr[START + i];
		update((START + i) / 2);
	}

	for (int i = 0; i < M + K; i++) {
		int a;
		cin >> a;
		if (a == 1) {
			int b;
			long long c;
			cin >> b >> c;
			b--;
			arr[START + b] = c;
			update((START + b) / 2);
		} else {
			int b, c;
			cin >> b >> c;
			b--;
			cout << mul(b, c, 1, 0, START) << '\n';
		}
	}
	return 0;
}