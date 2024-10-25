#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int N, M;
string arr[52];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    cin >> N >> M;
    for (int i = 0; i < N; i++)
        cin >> arr[i];

    int ans = 0;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            int x = i, y = j;
            int nx = i, ny = y + 1;
            if (arr[x][y] == '-' && (nx >= N || ny >= M)) {
                ans++;
                continue;
            }
            if (nx >= N || ny >= M || arr[x][y] == '|')
                continue;
            if (arr[x][y] == '-' && arr[nx][ny] == '|') {
                ans++;
            }
        }
    }
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            int x = i, y = j;
            int nx = i + 1, ny = y;
            if (arr[x][y] == '|' && (nx >= N || ny >= M)) {
                ans++;
                continue;
            }
            if (nx >= N || ny >= M || arr[x][y] == '-')
                continue;
            if (arr[x][y] == '|' && arr[nx][ny] == '-') {
                ans++;
            }
        }
    }
    cout << ans;
    return 0;
}