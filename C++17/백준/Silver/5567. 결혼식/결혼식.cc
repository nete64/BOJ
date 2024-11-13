#include <iostream>
#include <queue>
#include <vector>
#include <unordered_set>
using namespace std;

int n, m;
unordered_set<int> us;
vector<int> v[502];
bool visited[502];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    cin >> n >> m;
    for (int i = 0; i < m; i++) {
        int a, b; cin >> a >> b;
        v[a].push_back(b);
        v[b].push_back(a);
    }

    queue<pair<int, int> > q;
    q.push({1, 0});
    visited[1] = true;
    while(!q.empty()) {
        int x = q.front().first;
        int len = q.front().second;
        q.pop();

        if (len >= 2) continue;

        for (auto nx : v[x]) {
            if (!visited[nx]) {
                visited[nx] = true;
                us.insert(nx);
                q.push({nx, len + 1});
            }
        }
    }
    cout << us.size();
    return 0;
}