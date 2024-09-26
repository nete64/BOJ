#include <iostream>
using namespace std;

int N, M, K, mat1[102][102], mat2[102][102];
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	cin >> N >> M;
	for (int i = 1; i <= N; i++)
		for (int j = 1; j <= M; j++)
			cin >> mat1[i][j];

	cin >> M >> K;
	for (int i = 1; i <= M; i++)
		for (int j = 1; j <= K; j++)
			cin >> mat2[i][j];
	
	for (int i = 1; i <= N; i++) {
		for (int j = 1; j <= K; j++) {
			int ans = 0;
			for (int e = 1; e <= M; e++) {
				ans = ans + mat1[i][e] * mat2[e][j];
			}
			cout << ans << " ";
		}
		cout << "\n";
	}

	return 0;
}