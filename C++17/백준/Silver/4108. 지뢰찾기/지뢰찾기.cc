#include <iostream>
#include <string>
using namespace std;

string s[102];
int res[102][102];
int dx[] = {-1,0,1,1,1,0,-1,-1};
int dy[] = {-1,-1,-1,0,1,1,1,0};
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    while (true) {
        int R, C; cin >> R >> C;

        if (R == 0 && C == 0)
            break;
        
        for (int i = 0; i < R; i++)
            cin >> s[i];

        for (int i = 0; i < R; i++) {
            for (int j = 0; j < C; j++) {
                if (s[i][j] == '*')
                    res[i][j] = -1;
                else
                    res[i][j] = 0;
            }
        }
        
        for (int i = 0; i < R; i++) {
            for (int j = 0; j < C; j++) {
                if (s[i][j] == '*') {
                    for (int dir = 0; dir < 8; dir++) {
                        int nx = i + dx[dir];
                        int ny = j + dy[dir];

                        if (nx < 0 || ny < 0 || nx >= R || ny >= C)
                            continue;
                        
                        if (res[nx][ny] != -1)
                            res[nx][ny]++;
                    }
                }
            }
        }

        for (int i = 0; i < R; i++) {
            for (int j = 0; j < C; j++) {
                if (res[i][j] == -1)
                    cout << "*";
                else
                    cout << res[i][j];
            }
            cout << "\n";
        }
    }
    return 0;
}