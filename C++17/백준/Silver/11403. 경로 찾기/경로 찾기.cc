#include <iostream>
#include <queue>
#include <string>
#include <algorithm>
using namespace std;

const int MAX = 107;
int arr[MAX][MAX], N;
int ans[MAX][MAX];
void dfs(int a, int b)
{
    for (int i = 1; i <= N; i++) {
        if (ans[a][i] == 0 && arr[b][i] == 1) {
            ans[a][i] = 1;
            dfs(a, i);
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    cin >> N;
    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= N; j++) {
            cin >> arr[i][j];
        }
    }

    for (int i = 1; i <= N; i++)
        dfs(i, i);
    
    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= N; j++) {
            cout << ans[i][j] << " ";
        }
        cout << '\n';
    }

    return 0;
}