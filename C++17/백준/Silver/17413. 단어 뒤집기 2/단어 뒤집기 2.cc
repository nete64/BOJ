#include <iostream>
#include <string>
#include <stack>
#include <algorithm>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    string s;
    getline(cin, s);

    stack<char> st;
    for (int i = 0; i < s.size(); i++) {
        if (!st.empty() && st.top() == '<') {
            if (s[i] == '>')
                st.pop();
            cout << s[i];
        } else if (s[i] == ' ') {
            while (!st.empty()) {
                cout << st.top();
                st.pop();
            }
            cout << ' ';
        } else {
            if (s[i] == '<') {
                while (!st.empty()) {
                    cout << st.top();
                    st.pop();
                }
                cout << "<";
            }
            st.push(s[i]);
        }
    }
    while (!st.empty()) {
        cout << st.top();
        st.pop();
    }
    return 0;
}