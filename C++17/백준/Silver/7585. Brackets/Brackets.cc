#include <iostream>
#include <string>
#include <stack>
#include <unordered_map>
using namespace std;

unordered_map<char, char> um;
bool is_legal(string& s)
{
    stack<char> st;

    for (auto c : s) {
        if ( !(c == '(' || c == ')' || c == '{' || c == '}' || c == '[' || c == ']') )
            continue;

        if (!st.empty() && st.top() == um[c])
            st.pop();
        else
            st.push(c);
    }

    if (!st.empty())
        return false;

    return true;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    um[')'] = '(';
    um['}'] = '{';
    um[']'] = '[';

    while (true) {
        string s;
        getline(cin, s);

        if (s == "#")
            break;
        
        if (is_legal(s))
            cout << "Legal\n";
        else
            cout << "Illegal\n";
    }
    return 0;
}