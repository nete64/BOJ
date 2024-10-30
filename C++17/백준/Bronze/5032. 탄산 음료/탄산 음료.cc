#include <iostream>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
    
    int e, f, c; cin >> e >> f >> c;
    e += f;
    int ans = 0;
    while (e >= c) {
        e -= c;
        e++;
        ans++;
    }
    cout << ans;
	return 0;
}