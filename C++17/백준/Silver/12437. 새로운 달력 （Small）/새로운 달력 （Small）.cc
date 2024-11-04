#include <iostream>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
    
    int T; cin >> T;
    for (int i = 0; i < T; i++) {
        int a, b, c; cin >> a >> b >> c;

        int ans = 0, n = 0;
        for (int j = 0; j < a; j++) {
            ans += (b + n) / c;
            
            int k = (b + n) % c;
            if (k == 0)
                n = 0;
            else {
                ans++;
                n = k;
            }
        }
        cout << "Case #" << i + 1 << ": " <<  ans << "\n";
    }
	return 0;
}