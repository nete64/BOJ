#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;
const int MAX_V = 20002;
const int INF = 1'000'000'000;
using P = pair<int, int>;

int dist[MAX_V];
bool visited[MAX_V];
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	vector<P> adj[MAX_V];
	int V, E, K; cin >> V >> E >> K;
	K--;
	for (int i = 0; i < E; i++) {
		int u, v, w; cin >> u >> v >> w;
		adj[u - 1].push_back(P(v - 1, w));
	}

	fill(dist, dist + MAX_V, INF);

	priority_queue<P, vector<P>, greater<P> > pq;

	dist[K] = 0;
	pq.push(P(0, K));
	while (!pq.empty()) {
		int curr;
		do {
			curr = pq.top().second;
			pq.pop();
		} while (!pq.empty() && visited[curr]);

		if (visited[curr])
			break;
		
		visited[curr] = true;
		for (auto &p : adj[curr]) {
			int next = p.first;
			int d = p.second;

			if (dist[next] > dist[curr] + d) {
				dist[next] = dist[curr] + d;
				pq.push(P(dist[next], next));
			}
		}
	}

	for (int i = 0; i < V; i++) {
		if (dist[i] == INF)
			cout << "INF\n";
		else
			cout << dist[i] << '\n';
	}
}