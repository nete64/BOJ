#include <iostream>
#include <algorithm>
using namespace std;

int ans;
int arr[1002];
bool visited[1002];
void dfs(int x)
{
    if (visited[x]) {
        ans++;
        return;
    }

    visited[x] = true;
    dfs(arr[x]);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int T; cin >> T;
    while (T--) {
        int N; cin >> N;
        fill(visited, visited + 1002, false);

        for (int i = 1; i <= N; i++)
            cin >> arr[i];
        
        ans = 0;
        for (int i = 1; i <= N; i++)
            if (!visited[i])
                dfs(i);
        cout << ans << "\n";
    }
    return 0;
}