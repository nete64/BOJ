#include <iostream>
using namespace std;

int N, M;
int arr[10];
void bt(int depth)
{
	if (depth == M + 1) {
		for (int i = 1; i <= M; i++) {
			cout << arr[i] << " ";
		}
		cout << "\n";
		return;
	}

	for (int i = 1; i <= N; i++) {
		arr[depth] = i;
		bt(depth + 1);
	}
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	cin >> N >> M;
	bt(1);

	return 0;
}