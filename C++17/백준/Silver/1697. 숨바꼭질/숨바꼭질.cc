#include <iostream>
#include <queue>
#include <string>
#include <algorithm>
using namespace std;

const int MAX = 400003;
int N, K;
bool visited[MAX];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    cin >> N >> K;
    
    queue<pair<int, int>> q;
    q.push({N, 0});
    visited[N] = true;
    while (!q.empty()) {
        int cx = q.front().first;
        int len = q.front().second;
        q.pop();

        if (cx == K) {
            cout << len;
            break;
        }

        if (cx >= 1 && !visited[cx - 1]) {
            visited[cx - 1] = true;
            q.push({cx - 1, len + 1});
        }
        if (cx <= 99999 && !visited[cx + 1]) {
            visited[cx + 1] = true;
            q.push({cx + 1, len + 1});
        }
        if (cx <= 50000 && !visited[2 * cx]) {
            visited[2 * cx] = true;
            q.push({2 * cx, len + 1});
        }
    }
    return 0;
}