#include <iostream>
#include <unordered_set>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
    
    int T; cin >> T;
    while (T--) {
        unordered_set<int> us;

        int N; cin >> N;
        for (int i = 0; i < N; i++) {
            int X; cin >> X;
            us.insert(X);
        }

        int M; cin >> M;
        for (int i = 0; i < M; i++) {
            int X; cin >> X;
            cout << us.count(X) << "\n";
        }
    }
	return 0;
}