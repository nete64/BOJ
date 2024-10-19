#include <iostream>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);

    int T; cin >> T;
    while(T--) {
        int y = 0, k = 0;

        for (int i = 0; i < 9; i++) {
            int a, b; cin >> a >> b;
            y += a;
            k += b;
        }

        if (y > k)
            cout << "Yonsei\n";
        else if (y < k)
            cout << "Korea\n";
        else
            cout << "Draw\n";
    }
	return 0;
}