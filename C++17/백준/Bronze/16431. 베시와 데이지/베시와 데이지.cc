#include <iostream>
#include <queue>
using namespace std;

struct Node
{
    int x, y, len;
};
int dx1[] = {-1,0,1,1,1,0,-1,-1};
int dy1[] = {-1,-1,-1,0,1,1,1,0};
int dx2[] = {-1,1,0,0};
int dy2[] = {0,0,-1,1};
bool visited[1002][1002];
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);

    int Br, Bc, Dr, Dc, Jr, Jc;
    cin >> Br >> Bc >> Dr >> Dc >> Jr >> Jc;

    int lenB;
    queue<Node> q;
    q.push({Br, Bc, 0});
    visited[Br][Bc] = true;
    while(!q.empty()) {
        int x = q.front().x;
        int y = q.front().y;
        int len = q.front().len;
        q.pop();

        if (x == Jr && y == Jc) {
            lenB = len;
            break;
        }

        for (int i = 0; i < 8; i++) {
            int nx = x + dx1[i];
            int ny = y + dy1[i];

            if (nx <= 0 || ny <= 0 || nx > 1000 || ny > 1000)
                continue;
            
            if (!visited[nx][ny]) {
                visited[nx][ny] = true;
                q.push({nx, ny, len + 1});
            }
        }
    }

    while(!q.empty()) {
        q.pop();
    }
    for (int i = 0; i < 1001; i++)
        fill(visited[i], visited[i] + 1001, false);

    int lenD;
    q.push({Dr, Dc, 0});
    visited[Dr][Dc] = true;
    while(!q.empty()) {
        int x = q.front().x;
        int y = q.front().y;
        int len = q.front().len;
        q.pop();

        if (x == Jr && y == Jc) {
            lenD = len;
            break;
        }

        for (int i = 0; i < 4; i++) {
            int nx = x + dx2[i];
            int ny = y + dy2[i];

            if (nx <= 0 || ny <= 0 || nx > 1000 || ny > 1000)
                continue;
            
            if (!visited[nx][ny]) {
                visited[nx][ny] = true;
                q.push({nx, ny, len + 1});
            }
        }
    }
    if (lenB < lenD)
        cout << "bessie";
    else if (lenB > lenD)
        cout << "daisy";
    else
        cout << "tie";

	return 0;
}