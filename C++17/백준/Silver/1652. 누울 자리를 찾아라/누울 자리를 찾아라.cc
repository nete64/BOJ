#include <iostream>
#include <string>
using namespace std;

int N;
string s[102];
bool visited[102][102];
int check_row(int x, int y)
{
    int ret = 0;
    for (int i = y; i < N; i++) {
        if (s[x][i] == '.') {
            visited[x][i] = true;

            if (i + 1 < N && s[x][i + 1] == '.') {
                visited[x][i + 1] = true;
                ret = 1;
            }
        }
        if (s[x][i] == 'X')
            return ret;
    }
    return ret;
}

int check_col(int x, int y)
{
    int ret = 0;
    for (int i = x; i < N; i++) {
        if (s[i][y] == '.') {
            visited[i][y] = true;

            if (i + 1 < N && s[i + 1][y] == '.') {
                visited[i + 1][y] = true;
                ret = 1;
            }
        }
        if (s[i + 1][y] == 'X')
            return ret;
    }
    return ret;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    cin >> N;
    for (int i = 0; i < N; i++)
        cin >> s[i];
    
    int row = 0;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (!visited[i][j] && s[i][j] == '.') {
                visited[i][j] = true;
                row += check_row(i, j);
            }
        }
    }

    for (int i = 0; i < N; i++)
        fill(visited[i], visited[i] + N, false);

    int col = 0;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (!visited[i][j] && s[i][j] == '.') {
                visited[i][j] = true;
                col += check_col(i, j);
            }
        }
    }
    cout << row << " " << col;

    return 0;
}