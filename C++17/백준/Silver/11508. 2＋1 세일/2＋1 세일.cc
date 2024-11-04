#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
    
    vector<int> v;
    int N; cin >> N;
    for (int i = 0; i < N; i++) {
        int X; cin >> X;
        v.push_back(X);
    }

    sort(v.begin(), v.end());

    int ans = 0, k = 0;
    for (int i = v.size() - 1; i >= 0; i--) {
        if (++k == 3) k = 0;
        else ans += v[i];
    }
    cout << ans;
    
	return 0;
}