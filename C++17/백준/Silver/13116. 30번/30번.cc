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
        vector<int> v1, v2;
        int a, b; cin >> a >> b;
        while (a > 0) {
            v1.push_back(a);
            a /= 2;
        }
        while (b > 0) {
            v2.push_back(b);
            b /= 2;
        }

        int ans = 0;
        for (auto& m : v1) {
            for (auto& n : v2) {
                if (m == n) {
                    ans = max(ans, m);
                }
            }
        }
        cout << 10 * ans << "\n";
    }
	return 0;
}