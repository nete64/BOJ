#include <iostream>
#include <string>
#include <deque>
using namespace std;

int T, n, arr[100002];
string p;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    cin >> T;
    while (T--) {
        cin >> p >> n;

        string s;
        cin >> s;

        deque<int> dq;

        string tmp = "";
        for (int i = 0; i < s.length(); i++) {
            if (s[i] == '[')
                continue;
            else if (s[i] == ',' || s[i] == ']') {
                if (tmp.length() == 0)
                    continue;
                    
                dq.push_back(stoi(tmp));
                tmp = "";
            }
            else
                tmp += s[i];
        }

        bool isReversed = false;
        bool isError = false;
        for (int i = 0; i < p.length(); i++) {
            if (p[i] == 'R')
                isReversed = !isReversed;
            else if (p[i] == 'D') {
                if (isReversed) {
                    if (!dq.empty())
                        dq.pop_back();
                    else {
                        isError = true;
                        break;
                    }
                        
                } else {
                    if (!dq.empty())
                        dq.pop_front();
                    else {
                        isError = true;
                        break;
                    }
                }
            }
        }
        if (isError) {
            cout << "error\n";
        } else {
            cout << "[";
            while (!dq.empty()) {
                if (isReversed) {
                    cout << dq.back();
                    dq.pop_back();
                } else {
                    cout << dq.front();
                    dq.pop_front();
                }

                if (dq.size() > 0)
                    cout << ",";
            }
            cout << "]\n";
        }
    }


    return 0;
}