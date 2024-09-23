#include <iostream>
#include <algorithm>
using namespace std;

int N, M;
int arr[10], sorted[10];
bool visited[10002];
void bt(int depth, int curr)
{
	if (depth == M) {
		for (int i = 0; i < M; i++) {
			cout << arr[i] << " ";
		}
		cout << "\n";
		return;
	}

	for (int i = 0; i < N; i++) {
		arr[depth] = sorted[i];
		bt(depth + 1, i + 1);
	}
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	cin >> N >> M;
	for (int i = 0; i < N; i++)
		cin >> sorted[i];
	sort(sorted, sorted + N);
	bt(0, 0);

	return 0;
}