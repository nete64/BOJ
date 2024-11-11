#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int cnt[10002];
vector<int> v[10002];
bool visited[10002];
int h;
void dfs(int depth, int x, int s)
{
    visited[x] = true;
    cnt[s] = max(cnt[s], h);

    for (auto nx : v[x]) {
        if (!visited[nx]) {
            h++;
            visited[nx] = true;
            dfs(depth + 1, nx, s);
        }
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int N, M; cin >> N >> M;
    for (int i = 0; i < M; i++) {
        int A, B; cin >> A >> B;
        v[B].push_back(A);
    }

    for (int i = 1; i <= N; i++) {
        h = 1;
        fill(visited + 1, visited + N + 1, false);
        dfs(1, i, i);
    }

    int mxcnt = 0;
    for (int i = 1; i <= N; i++)
        mxcnt = max(mxcnt, cnt[i]);
    
    for (int i = 1; i <= N; i++)
        if(mxcnt == cnt[i])
            cout << i << " ";
    
    return 0;
}