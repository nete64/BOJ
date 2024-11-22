#include <iostream>
#include <stack>
#include <vector>
#include <algorithm>
using namespace std;

int arr[1000002];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    stack<pair<int,int> > st;
    int N; cin >> N;
    
    for (int i = 0; i < N; i++)
        cin >> arr[i];

    vector<int> v;
    st.push({1e9+9, N});
    for (int i = N - 1; i >= 0; i--) {
        while (st.top().first <= arr[i]) {
            st.pop();
        }
        if (st.top().first == 1e9+9)
            v.push_back(-1);
        else
            v.push_back(st.top().first);
        st.push({arr[i], i});
    }
    for (int i = v.size() - 1; i >= 0; i--)
        cout << v[i] << " ";
    return 0;
}