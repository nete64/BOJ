#include <iostream>
using namespace std;

int arr[303][303];
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int N, M; cin >> N >> M;
    for (int i = 1; i <= N; i++)
        for (int j = 1; j <= M; j++)
            cin >> arr[i][j];
    
    int K; cin >> K;
    while (K--) {
        int a, b, c, d; cin >> a >> b >> c >> d;
        int ans = 0;
        for (int i = a; i <= c; i++)
            for (int j = b; j <= d; j++)
                ans += arr[i][j];
        
        cout << ans << "\n";
    }
	return 0;
}