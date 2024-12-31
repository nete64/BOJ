#include <iostream>
#include <vector>
#include <numeric>
using namespace std;

vector<int> v;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int A, B; cin >> A >> B;
    int ans = 0;
    while (true) {
        if (A <= 0 || B <= 0)
            break;
        
        int g = gcd(A, B);
        if (A / g - B / g == 1) {
            v.push_back(A / g);
            A -= A / g;
            B -= B / g;
        } else {
            v.push_back(2);
            A -= 2;
            B -= 1;
        }
    }
    
    if (A > 0 || B > 0 || A < 0 || B < 0)
        cout << "NO";
    else {
        cout << "YES\n" << v.size() << "\n";
        for (auto e : v) {
            for (int i = 0; i < e - 1; i++)
                cout << "ab";
            cout << "a\n";
        }
    }
    return 0;
}