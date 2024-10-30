#include <iostream>
using namespace std;
using ll = long long;

ll arr[10002];
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
    
    int N, M; cin >> N >> M;
    for (int i = 0; i < N; i++)
        cin >> arr[i];
    
    ll lo = 0, hi = 0, sum = 0, ans = 0;
    while (true) {
        if (sum > M) sum -= arr[lo++];
        else if (hi == N) break;
        else sum += arr[hi++];
        if (sum == M) ans++;
    }
    cout << ans;
	return 0;
}