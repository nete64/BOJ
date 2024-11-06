#include <iostream>
#include <string>
#include <deque>
#include <algorithm>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int T; cin >> T;
    while (T--) {
        deque<char> dq;
        int N; cin >> N;
        cin.ignore();
        string s;
        getline(cin, s);
        for (auto& c : s)
            if (isalpha(c)) {
                if (dq.empty()) {
                    dq.push_back(c);
                    continue;
                }

                if (dq.front() >= c)
                    dq.push_front(c);
                else
                    dq.push_back(c);
            }
        for (auto& e : dq)
            cout << e;
        cout << "\n";
    }
    return 0;
}