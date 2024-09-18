#include <iostream>
using namespace std;

const int MAX = 10003;
int N, M, arr[MAX][MAX];
bool visited[MAX];
void dfs(int curr)
{
    visited[curr] = true;

    for (int i = 1; i <= N; i++) {
        if (!visited[i] && arr[curr][i]) {
            dfs(i);
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    cin >> N >> M;
    for (int i = 1; i <= M; i++) {
        int a, b; cin >> a >> b;
        arr[a][b] = arr[b][a] = 1;
    }

    int ans = 0;
    for (int i = 1; i <= N; i++) {
        if (!visited[i]) {
            dfs(i);
            ans++;
        }
    }
    cout << ans;
    
    return 0;
}