#include <iostream>
#include <stack>
#include <algorithm>
using namespace std;
using ll = long long;

ll h[80002];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    stack<pair<int,int> > st;
    int N; cin >> N;
    
    for (int i = 0; i < N; i++)
        cin >> h[i];
    
    ll ans = 0;
    st.push({1e9+9, N});
    for (int i = N - 1; i >= 0; i--) {
        while (st.top().first < h[i]) {
            st.pop();
        }
        ans += st.top().second - i - 1;
        st.push({h[i], i});
    }
    cout << ans;
    return 0;
}