#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int arr[42][42];
#include <vector>
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int R, C; cin >> R >> C;
    for (int i = 0; i < R; i++)
        for (int j = 0; j < C; j++)
            cin >> arr[i][j];
    int T; cin >> T;

    int ans = 0;
    vector<int> f;
    for (int m = 0; m + 2 < R; m++) {
        for (int i = 0; i + 2 < C; i++) {
            vector<int> v;
            for (int j = 0; j < 3; j++)
                for (int k = 0; k < 3; k++)
                    v.push_back(arr[m + j][i + k]);
            sort(v.begin(), v.end());
            if (v[v.size() / 2] >= T)
                ans++;
        }
    }
    cout << ans;
	return 0;
}