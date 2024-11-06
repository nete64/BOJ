#include <iostream>
#include <map>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int T; cin >> T;
    while (T--) {
        int N; cin >> N;
        
        map<int, int> m;
        int k = 2;
        while (N > 1) {
            if (N % k == 0) {
                N /= k;
                m[k]++;
            } else {
                k++;
            }
        }
        for(auto& e : m)
            cout << e.first << " " << e.second << "\n";
    }
    return 0;
}