#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
using namespace std;

int arr[1001][6];
bool isFriend[1001][1001];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int N; cin >> N;
    for (int i = 0; i < N; i++)
        for (int j = 0; j < 5; j++)
            cin >> arr[i][j];
    
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < N; j++) {
            for (int k = j + 1; k < N; k++) {
                if (arr[j][i] == arr[k][i]) {
                    isFriend[j][k] = isFriend[k][j] = true;
                }
            }
        }
    }

    int ans = 0;
    int tmp = -1;
    for (int i = 0; i < N; i++) {
        int cnt = 0;
        for (int j = 0; j < N; j++)
            if (isFriend[i][j])
                cnt++;
        
        if (cnt > tmp) {
            ans = i + 1;
            tmp = cnt;
        }
    }
    
    cout << ans;
    
    return 0;
}