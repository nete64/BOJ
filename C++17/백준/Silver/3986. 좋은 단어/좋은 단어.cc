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
        bool chk = true;
        int A = 0, B = 0;

        string s; cin >> s;
        for (auto& c : s) {
            if (!st.empty()) {
                if (st.top() == c) {
                    if (c == 'A') A--;
                    else B--;
                    st.pop();
                } else {
                    if (A > 1 || B > 1) {
                        chk = false;
                        break;
                    } else {
                        st.push(c);
                    }
                }
            } else {
                st.push(c);
            }
        }

        if (chk && st.empty()) ans++;
    }
    cout << ans;
    return 0;
}