#include <iostream>
#include <unordered_set>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    unordered_set<int> us;
    int T; cin >> T;
    while (T--) {
        int N; cin >> N;
        while (N > 0) {
            us.insert(N % 10);
            N /= 10;
        }
        cout << us.size() << "\n";
        us.clear();
    }
    return 0;
}