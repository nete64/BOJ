#include <iostream>
#include <vector>
#include <queue>
using namespace std;

vector<int> v[1002];
bool visited[1002];
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
    
    int a, b, N, M; cin >> a >> b >> N >> M;
    for (int i = 0; i < M; i++) {
        int s, e; cin >> s >> e;
        v[s].push_back(e);
        v[e].push_back(s);
    }

    queue<pair<int,int> > q;
    q.push({a, 0});
    visited[a] = true;
    
    int len = 0;
    while(!q.empty()) {
        int x = q.front().first;
        len = q.front().second;
        q.pop();

        if (x == b) {
            cout << len;
            return 0;
        }

        for (int i = 0; i < v[x].size(); i++) {
            int nx = v[x][i];
            if (!visited[nx]) {
                visited[nx] = true;
                q.push({nx, len + 1});
            }
        }
    }
    cout << "-1";
	return 0;
}