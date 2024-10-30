#include <iostream>
#include <algorithm>
using namespace std;

int A, B, C, D, ans, cnt;
float mx;
float f()
{
    return (float)A/C + B/D;
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
    
    cin >> A >> B >> C >> D;
    mx = f();
    for (int i = 0; i < 3; i++) {
        int e = A, k = B, g = C, h = D;
        A = g; B = e; C = h; D = k;
        cnt++;

        float s = f();
        if (mx < s) {
            mx = s;
            ans = cnt;
        }
    }
    cout << ans;
	return 0;
}