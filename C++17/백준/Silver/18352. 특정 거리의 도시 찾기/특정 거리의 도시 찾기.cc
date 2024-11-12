#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

int dist[300007];
vector<int> v[300007];
bool visited[300007];
void bfs(int sx)
{
    queue<pair<int, int> > q;
    visited[sx] = true;
    q.push({sx, 0});
    while (!q.empty()) {
        int x = q.front().first;
        int len = q.front().second;
        dist[x] = len;
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

    int N, M, K, X; cin >> N >> M >> K >> X;
    for (int i = 0; i < M; i++) {
        int A, B; cin >> A >> B;
        v[A].push_back(B);
    }

    bfs(X);

    bool isZero = true;
    for (int i = 1; i <= N; i++)
        if (dist[i] == K) {
            isZero = false;
            cout << i << "\n";
        }

    if (isZero)
        cout << "-1";

    return 0;
}