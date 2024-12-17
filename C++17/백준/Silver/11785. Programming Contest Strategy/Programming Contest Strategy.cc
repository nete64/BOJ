#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int T; cin >> T;
    for (int i = 1; i <= T; i++) {
        int P, L; cin >> P >> L;

        vector<int> v;
        for (int i = 0; i < P; i++) {
            int X; cin >> X;
            v.push_back(X);
        }
        sort(v.begin(), v.end());
        
        int c = 0, s = 0, w = 0;
        for (auto e : v) {
            if (w + e <= L) {
                w += e;
                s += w;
                c++;
            }
        }
        cout << "Case " << i << ": " << c << " " << w << " " << s << "\n";
    }
    return 0;
}