#include <iostream>
#include <algorithm>
using namespace std;

int N, M;
int arr[10], ans[10];
bool visited[10];
void bt(int depth, int curr)
{
	if (depth == M) {
		for (int i = 0; i < M; i++)
			cout << ans[i] << ' ';
		cout << '\n';
		return;
	}

	for (int i = 0; i < N; i++) {
        if (!visited[i]) {
            visited[i] = true;
            ans[depth] = arr[i];
            bt(depth + 1, i);
            visited[i] = false;
        }
	}
}

int main()
{
	cin >> N >> M;
    for (int i = 0; i < N; i++)
        cin>> arr[i];
    sort(arr, arr + N);
	bt(0, 0);
	return 0;
}