#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int T; cin >> T;
    while (T--) {
        string A, B; cin >> A >> B;
        int x = 0, y = 0;
        for (int i = 0; i < A.size(); i++) {
            if (A[i] == '0' && B[i] == '1')
                x++;
            else if (A[i] == '1' && B[i] == '0')
                y++;
        }
        cout << max(x, y) << "\n";
    }
}