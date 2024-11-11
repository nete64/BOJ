#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;

int A[100002], ans;
bool visited[100002];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n; cin >> n;
    for (int i = 0; i < n; i++)
        cin >> A[i];

    int s; cin >> s;

    queue<int> q;
    q.push(s - 1);
    visited[s - 1] = true;
    while(!q.empty()) {
        int x = q.front();
        ans++;
        q.pop();

        int nx = x - A[x];
        if (nx >= 0 && !visited[nx]) {
            visited[nx] = true;
            q.push(nx);
        }

        nx = x + A[x];
        if (nx < n && !visited[nx]) {
            visited[nx] = true;
            q.push(nx);
        }
    }
    cout << ans;
    return 0;
}