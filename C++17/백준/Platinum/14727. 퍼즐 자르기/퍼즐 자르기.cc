#include <iostream>
#include <stack>
#include <algorithm>
using ll = long long;
using namespace std;

ll arr[100002];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int N; cin >> N;
    for (int i = 0; i < N; i++)
        cin >> arr[i];

    ll ans = 0;
    stack<pair<ll, ll> > st;
    for (int i = 0; i <= N; i++) {
        while (!st.empty() && st.top().first >= arr[i]) {
            ll height = st.top().first; st.pop();

            ll width = i;
            if (!st.empty())
                width = width - st.top().second - 1;
            ans = max(ans, width * height);
        }
        st.push({arr[i],i});
    }
    cout << ans;
    return 0;
}