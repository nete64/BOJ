#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int ans = -1;
vector<int> v[102];
bool visited[102];
void dfs(int depth, int cur, int e)
{
    if (cur == e) {
        ans = depth;
        return;
    }

    visited[cur] = true;
    for (auto nx : v[cur]) {
        if (!visited[nx]) {
            visited[nx] = true;
            dfs(depth + 1, nx, e);
        }
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n, a, b, m; cin >> n >> a >> b >> m;
    for (int i = 0; i < m; i++) {
        int x, y; cin >> x >> y;
        v[x].push_back(y);
        v[y].push_back(x);
    }

    dfs(0, a, b);
    cout << ans;
    return 0;
}