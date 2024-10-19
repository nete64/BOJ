#include <iostream>
using namespace std;

int r1[]={1,3,6,10,15,21};
int s1[]={5000000,3000000,2000000,500000,300000,100000};
int r2[]={1,3,7,15,31};
int s2[]={5120000,2560000,1280000,640000,320000};
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);

    int T; cin >> T;
    while (T--) {
        int a, b; cin >> a >> b;
        int ans = 0;
        for (int i = 0; i < 6; i++) {
            if (a == 0)
                break;
            if (a <= r1[i]) {
                ans += s1[i];
                break;
            }
        }
        for (int i = 0; i < 5; i++) {
            if (b == 0)
                break;
            if (b <= r2[i]) {
                ans += s2[i];
                break;
            }
        }
        cout << ans << "\n";
    }
	return 0;
}