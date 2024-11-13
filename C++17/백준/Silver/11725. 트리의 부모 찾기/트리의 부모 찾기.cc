#include <iostream>
#include <vector>
using namespace std;

int parent[100002];
bool visited[100002];
vector<int> v[100002];
void dfs(int p, int x)
{
    parent[x] = p;
    visited[x] = true;

    for (auto nx : v[x]) {
        if (!visited[nx]) {
            visited[nx] = true;
            dfs(x, nx);
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int N; cin >> N;
    for (int i = 0; i < N - 1; i++) {
        int a, b; cin >> a >> b;
        v[a].push_back(b);
        v[b].push_back(a);
    }
    dfs(-1, 1);
    for (int i = 2; i <= N; i++)
        cout << parent[i] << "\n";
    return 0;
}