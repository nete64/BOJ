#include <iostream>
using namespace std;

int N, M;
int arr[9];
void bt(int depth, int curr)
{
	if (depth == M) {
		for (int i = 0; i < M; i++)
			cout << arr[i] << ' ';
		cout << '\n';
		return;
	}

	for (int i = curr; i < N; i++) {
		arr[depth] = i + 1;
		bt(depth + 1, i);
	}
}

int main()
{
	cin >> N >> M;
	bt(0, 0);
	return 0;
}