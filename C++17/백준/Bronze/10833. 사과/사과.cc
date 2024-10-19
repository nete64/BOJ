#include <iostream>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);

    int T; cin >> T;
    int ans = 0;
    while(T--) {
        int a, b; cin >> a >> b;
        ans += b - (b / a) * a;
    }
    cout << ans;
	return 0;
}