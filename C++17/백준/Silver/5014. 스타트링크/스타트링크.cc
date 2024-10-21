#include <iostream>
#include <queue>
using namespace std;

bool visited[1000003];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int F, S, G, U, D; cin >> F >> S >> G >> U >> D;

    queue<pair<int,int> > q;
    q.push({S, 0});
    visited[S] = true;
    while(!q.empty()) {
        int y = q.front().first;
        int len = q.front().second;
        q.pop();

        if (y == G) {
            cout << len;
            return 0;
        }

        if (y + U <= F && !visited[y + U]) {
            visited[y + U] = true;
            q.push({y + U, len + 1});
        }
        if (y - D >= 1 && !visited[y - D]) {
            visited[y - D] = true;
            q.push({y - D, len + 1});
        }
    }
    cout << "use the stairs";
    return 0;
}