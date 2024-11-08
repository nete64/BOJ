#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    stack<char> t;
    string s; cin >> s;
    for (auto c : s) {
        if (c == '(')
            t.push(c);
        else if (c == ')') {
            if (!t.empty() && t.top() == '(')
                t.pop();
            else
                t.push(')');
        }
    }
    cout << t.size();
    return 0;
}