#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int T; cin >> T;
    while (T--) {
        vector<int> v;
        for (int i = 0; i < 5; i++) {
            int X; cin >> X;
            v.push_back(X);
        }
        
        sort(v.begin(), v.end());
        if (v[3] - v[1] >= 4)
            cout << "KIN\n";
        else
            cout << v[1] + v[2] + v[3] << "\n";
    }
    return 0;
}