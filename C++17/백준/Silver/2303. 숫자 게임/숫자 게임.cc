#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int ans;
vector<int> v;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int N; cin >> N;
    while (N--) {
        vector<int> w;
        for (int i = 0; i < 5; i++) {
            int X; cin >> X;
            w.push_back(X);
        }

        int mx = 0;
        for (int i = 0; i < 5; i++)
            for (int j = i + 1; j < 5; j++)
                for (int k = j + 1; k < 5; k++) {
                    mx = max(mx, (w[i] + w[j] + w[k]) % 10);
                    ans = max(ans, mx);
                }

        v.push_back(mx);
    }
    for (int i = v.size() - 1; i >= 0; i--) {
        if (v[i] == ans) {
            cout << i + 1;
            break;
        }
    }
    return 0;
}