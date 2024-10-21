#include <iostream>
#include <deque>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    deque<int> dq;
    int N; cin >> N;
    while (N--) {
        string s; cin >> s;
        if (s == "push_front") {
            int X; cin >> X;
            dq.push_front(X);
        } else if (s == "push_back") {
            int X; cin >> X;
            dq.push_back(X);
        } else if (s == "pop_front") {
            if (dq.empty())
                cout << "-1\n";
            else {
                cout << dq.front() << "\n";
                dq.pop_front();
            }
        } else if (s == "pop_back") {
            if (dq.empty())
                cout << "-1\n";
            else {
                cout << dq.back() << "\n";
                dq.pop_back();
            }
        } else if (s == "size") {
            cout << dq.size() << "\n";
        } else if (s == "empty") {
            cout << dq.empty() << "\n";
        } else if (s == "front") {
            if (dq.empty())
                cout << "-1\n";
            else
                cout << dq.front() << "\n";
        } else if (s == "back") {
            if (dq.empty())
                cout << "-1\n";
            else
                cout << dq.back() << "\n";
        }
    }
    return 0;
}