#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

int dist[102];
vector<int> v[102];
bool visited[102];
void bfs(int sx)
{
    queue<pair<int, int> > q;
    visited[sx] = true;
    q.push({sx, 0});
    while (!q.empty()) {
        int x = q.front().first;
        int len = q.front().second;
        dist[sx] += len;
        q.pop();

        for (auto nx : v[x]) {
            if (!visited[nx]) {
                visited[nx] = true;
                q.push({nx, len + 1});
            }
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int N, M; cin >> N >> M;
    for (int i = 0; i < M; i++) {
        int A, B; cin >> A >> B;
        v[A].push_back(B);
        v[B].push_back(A);
    }

    for (int i = 1; i <= N; i++) {
        fill(visited + 1, visited + N + 1, false);
        bfs(i);
    }

    int mn = 1e9;
    for (int i = 1; i <= N; i++)
        mn = min(mn, dist[i]);
        
    for (int i = 1; i <= N; i++) {
        if (dist[i] == mn) {
            cout << i;
            break;
        }
    }
    return 0;
}