#include <iostream>
using namespace std;

bool chk;
int N, arr[4][4];
void dfs(int x, int y)
{
    if (arr[x][y] == 0 || x >= N || y >= N) return;
    if (x == N - 1 && y == N - 1) {
        chk = true;
        return;
    }

    dfs(x + arr[x][y], y);
    dfs(x, y + arr[x][y]);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    cin >> N;
    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++)
            cin >> arr[i][j];
    
    dfs(0, 0);
    if (chk) cout << "HaruHaru";
    else cout << "Hing";
    return 0;
}