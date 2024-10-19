#include <iostream>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);

    int mxi = 0, mx = -123456789;
    for (int i = 1; i <= 5; i++) {
        int sum = 0;
        for (int j = 0; j < 4; j++) {
            int x; cin >> x;
            sum += x;
        }
        if (sum > mx) {
            mx = sum;
            mxi = i;
        }
    }
    cout << mxi << " " << mx;
	return 0;
}