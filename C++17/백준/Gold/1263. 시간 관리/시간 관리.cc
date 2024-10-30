#include <iostream>
#include <algorithm>
using namespace std;

struct P {
    int T, S;
};
bool cmp(P& a, P& b)
{
    return a.S < b.S;
}
P p[1002];
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
    
    int N; cin >> N;
    for (int i = 0; i < N; i++)
        cin >> p[i].T >> p[i].S;
    
    sort(p, p + N, cmp);

    int ans = -1;
    for (int k = p[0].S - 1; k >= 0; k--) {
        int s = k;
        bool b = true;
        for (int i = 0; i < N; i++) {
            s += p[i].T;
            if (s > p[i].S) {
                b = false;
                break;
            }
        }
        if (b) {
            ans = max(ans, k);
        }
    }
    cout << ans;
	return 0;
}