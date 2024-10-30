#include <iostream>
using namespace std;

int arr[22], N, S, ans, sum;
void bt(int cur)
{
    if (cur >= N)
        return;
    
    if (sum + arr[cur] == S) ans++;

    bt(cur + 1);
    sum += arr[cur];
    bt(cur + 1);
    sum -= arr[cur];
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
    
    cin >> N >> S;
    for (int i = 0; i < N; i++)
        cin >> arr[i];
    
    bt(0);
    cout << ans;
	return 0;
}