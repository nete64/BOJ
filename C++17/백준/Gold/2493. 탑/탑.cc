#include <iostream>
#include <stack>
#include <algorithm>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    stack<pair<int, int> > st;
    int N; cin >> N;
    
    st.push({1e9+9, 0});
    for (int i = 0; i < N; i++) {
        int X; cin >> X;
        while (st.top().first < X) {
            st.pop();
        }
        cout << st.top().second << " ";
        st.push({X, i + 1});
    }
    return 0;
}