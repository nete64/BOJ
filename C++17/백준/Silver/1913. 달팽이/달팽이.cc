#include <iostream>
#include <algorithm>
#include <unordered_map>
using namespace std;

int arr[1000][1000];
int dx[] = {-1,0,1,0};
int dy[] = {0,1,0,-1};
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int N; cin >> N;

    unordered_map<int, pair<int, int> > um;
    int i = 0, j = 0, k = 1, m = 0, dir = 0;
    int x = N / 2, y = N / 2;
    while (i < N * N) {
        arr[x][y] = i + 1;
        um[i + 1] = {x + 1, y + 1};
        x += dx[dir];
        y += dy[dir];
        i++, j++;

        if (j == k) {
            dir = (dir + 1) % 4;
            j = 0;
            m++;
        }
        
        if (m == 2) {
            k++;
            m = 0;
        }
    }
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cout << arr[i][j] << " ";
        }
        cout << "\n";
    }
    
    int K; cin >> K;
    cout << um[K].first << " " << um[K].second;
    return 0;
}