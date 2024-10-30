#include <iostream>
#include <vector>
using namespace std;
using ll = long long;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
    
    vector<int> v;
    int S, K; cin >> S >> K;
    int m = S - (S / K * K);
    for (int i = 0; i < K; i++) {
        if (m-- > 0)
            v.push_back(S / K + 1);
        else
            v.push_back(S / K);
    }

    ll ans = 1;
    for (auto& e : v)
        ans *= e;
    cout << ans;
	return 0;
}