#include <iostream>
#include <algorithm>
using namespace std;

int A[20002], B[20002];
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
    
    int T; cin >> T;
    while (T--) {
        int N, M; cin >> N >> M;
        for (int i = 0; i < N; i++)
            cin >> A[i];
        for (int i = 0; i < M; i++)
            cin >> B[i];

        sort(A, A + N);
        sort(B, B + M);
        
        int ia = N - 1, ib = M - 1, ans = 0, prev = 0;
        while (true) {
            if (ib < 0) break;
            if (ia < 0 || A[ia] <= B[ib]) {
                ib--;
                ans += prev;
            } else {
                ia--;
                prev++;
            }
        }
        cout << ans << "\n";
    }
	return 0;
}