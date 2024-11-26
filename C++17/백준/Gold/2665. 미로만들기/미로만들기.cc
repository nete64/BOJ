#include <iostream>
#include <deque>
#include <algorithm>
using namespace std;

int dx[] = {-1, 1, 0, 0};
int dy[] = {0, 0, -1, 1};
bool visited[52][52];
string arr[52];
struct Node {
    int x, y, k;
};
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n; cin >> n;
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    
    int ans = 0;
    deque<Node> dq;
    dq.push_front({0, 0, 0});
    visited[0][0] = true;
    while (!dq.empty()) {
        int x = dq.front().x;
        int y = dq.front().y;
        int k = dq.front().k;
        dq.pop_front();

        if (x == n - 1 && y == n - 1) {
            ans = k;
            break;
        }

        for (int i = 0; i < 4; i++) {
            int nx = x + dx[i];
            int ny = y + dy[i];

            if (nx < 0 || ny < 0 || nx >= n || ny >= n)
                continue;
            
            if (!visited[nx][ny] && arr[nx][ny] == '1') {
                visited[nx][ny] = true;
                dq.push_front({nx, ny, k});
            }
            else if (!visited[nx][ny] && arr[nx][ny] == '0') {
                visited[nx][ny] = true;
                dq.push_back({nx, ny, k + 1});
            }
        }
    }
    cout << ans;
    return 0;
}