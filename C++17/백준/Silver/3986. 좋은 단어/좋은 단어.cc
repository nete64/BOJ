#include <iostream>
#include <string>
#include <stack>
#include <algorithm>
using namespace std;

int ans;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int N; cin >> N;
    while (N--) {
        stack<char> st;
        string s; cin >> s;
        for (auto& c : s) {
            if (!st.empty() && st.top() == c)
                st.pop();
            else
                st.push(c);
        }
        if (st.empty()) ans++;
    }
    cout << ans;
    return 0;
}