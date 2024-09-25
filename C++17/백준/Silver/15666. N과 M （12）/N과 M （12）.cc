#include <iostream>
#include <algorithm>
using namespace std;

int N, M, K, tmp[10], arr[10], ans[10];
void bt(int depth, int curr)
{
	if (depth == M) {
		for (int i = 0; i < M; i++)
			cout << ans[i] << " ";
		cout << '\n';
		return;
	}

	for (int i = curr; i <= K; i++) {
		ans[depth] = arr[i];
		bt(depth + 1, i);
	}
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	cin >> N >> M;
	for (int i = 0; i < N; i++)
		cin >> tmp[i];
	sort(tmp, tmp + N);

	arr[0] = tmp[0];
	for (int i = 1; i < N; i++) {
		if (tmp[i] != arr[K]) {
			arr[++K] = tmp[i];
		}
	}

	bt(0, 0);
	return 0;
}