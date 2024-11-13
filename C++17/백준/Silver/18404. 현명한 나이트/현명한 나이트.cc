#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

int dx[] = {-2, -2, -1, -1, 1, 1, 2, 2};
int dy[] = {-1, 1, -2, 2, -2, 2, -1, 1};
int arr[502][502];
bool visited[502][502];
struct Node {
    int x, y, len;
};
struct Ans {
    int i, cnt;
};
bool cmp(Ans& a, Ans& b)
{
    return a.i < b.i;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int N, M; cin >> N >> M;
    int X, Y; cin >> X >> Y;
    for (int i = 0; i < M; i++) {
        int A, B; cin >> A >> B;
        arr[A][B] = i + 1;
    }

    vector<Ans> v;
    queue<Node> q;
    q.push({X, Y, 0});
    visited[X][Y] = true;
    while(!q.empty()) {
        int x = q.front().x;
        int y = q.front().y;
        int len = q.front().len;
        q.pop();

        for (int i = 0; i < 8; i++) {
            int nx = x + dx[i];
            int ny = y + dy[i];

            if (nx <= 0 || ny <= 0 || nx > N || ny > N)
                continue;
            
            if (!visited[nx][ny]) {
                visited[nx][ny] = true;
                q.push({nx, ny, len + 1});
                if (arr[nx][ny] > 0) {
                    v.push_back({arr[nx][ny], len + 1});
                }
            }
        }
    }
    sort(v.begin(), v.end(), cmp);
    for (auto& e : v)
        cout << e.cnt << " ";
    return 0;
}