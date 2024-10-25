#include <iostream>
#include <string>
using namespace std;

string s[10], w[10];
int res[10][10];
int dx[] = {-1,0,1,1,1,0,-1,-1};
int dy[] = {-1,-1,-1,0,1,1,1,0};
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n; cin >> n;

    for (int i = 0; i < n; i++)
        cin >> s[i];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (s[i][j] == '*')
                res[i][j] = -1;
            else
                res[i][j] = 0;
        }
    }
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (s[i][j] == '*') {
                for (int dir = 0; dir < 8; dir++) {
                    int nx = i + dx[dir];
                    int ny = j + dy[dir];

                    if (nx < 0 || ny < 0 || nx >= n || ny >= n)
                        continue;
                    
                    if (res[nx][ny] != -1)
                        res[nx][ny]++;
                }
            }
        }
    }

    for (int i = 0; i < n; i++)
        cin >> w[i];

    bool b = false;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            if (w[i][j] == 'x' && res[i][j] == -1)
                b = true;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (b && res[i][j] == -1)
                cout << "*";
            else if (w[i][j] == 'x')
                cout << res[i][j];
            else
                cout << ".";
        }
        cout << "\n";
    }
    return 0;
}