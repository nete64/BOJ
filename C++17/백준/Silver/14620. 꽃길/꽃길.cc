#include <iostream>
#include <algorithm>
using namespace std;

int arr[12][12], tmp[12][12], r[3], c[3];
int dx[] = {-1, 0, 0, 0, 1};
int dy[] = {0, -1, 0, 1, 0};
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int N; cin >> N;
    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++)
            cin >> arr[i][j];
    
    int ans = 1e9;
    for (int i = 0; i < N * N; i++) {
        for (int j = i + 1; j < N * N; j++) {
            for (int k = j + 1; k < N * N; k++) {
                r[0] = i / N, c[0] = i % N;
                r[1] = j / N, c[1] = j % N;
                r[2] = k / N, c[2] = k % N;

                for (int i = 0; i < N; i++)
                    for (int j = 0; j < N; j++)
                        tmp[i][j] = 0;

                bool die = false;
                for (int u = 0; u < 5; u++) {
                    for (int v = 0; v < 3; v++) {
                        int nx = r[v] + dx[u];
                        int ny = c[v] + dy[u];

                        if (nx < 0 || ny < 0 || nx >= N || ny >= N) {
                            die = true;
                            break;
                        }
                        tmp[nx][ny]++;
                    }
                    if (die) break;
                }

                if (die) continue;

                for (int x = 0; x < N; x++) {
                    for (int y = 0; y < N; y++) {
                        if (tmp[x][y] > 1) {
                            die = true;
                            break;
                        }
                    }
                    if (die) break;
                }
                if (die) continue;

                int s = 0;
                for (int u = 0; u < 5; u++) {
                    for (int v = 0; v < 3; v++) {
                        int nx = r[v] + dx[u];
                        int ny = c[v] + dy[u];
                        s += arr[nx][ny];
                    }
                }
                ans = min(ans, s);
            }
        }
    }
    cout << ans;
    return 0;
}