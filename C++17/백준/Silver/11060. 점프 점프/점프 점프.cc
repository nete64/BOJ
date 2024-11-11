#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;

int A[1002];
bool visited[1002];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int N; cin >> N;
    for (int i = 0; i < N; i++)
        cin >> A[i];
    
    queue<pair<int, int> > q;
    q.push({0, 0});
    visited[0] = true;
    while(!q.empty()) {
        int x = q.front().first;
        int len = q.front().second;
        q.pop();

        if (x >= N - 1) {
            cout << len;
            return 0;
        }

        for (int i = 1; i <= A[x]; i++) {
            int nx = x + i;
            if (nx >= N)
                break;

            if (!visited[nx]) {
                visited[nx] = true;
                q.push({nx, len + 1});
            }
        }
    }
    cout << "-1";
    return 0;
}