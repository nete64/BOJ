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

    while (true) {
        int N; cin >> N;
        for (int i = 0; i < N; i++)
            cin >> arr[i];
        arr[N] = 0;

        if (N == 0)
            break;

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
        cout << ans << "\n";
    }
    return 0;
}