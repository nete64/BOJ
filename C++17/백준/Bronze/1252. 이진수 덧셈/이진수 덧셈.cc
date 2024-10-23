#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int carry = 0;
    vector<int> v;

    string s1, s2; cin >> s1 >> s2;
    string a = "", b = "";
    bool is_zero_begin = true;
    for (auto c : s1) {
        if (c == '1') is_zero_begin = false;
        if (!is_zero_begin) a += c;
    }

    if (is_zero_begin)
        a = "0";

    is_zero_begin = true;
    for (auto c : s2) {
        if (c == '1') is_zero_begin = false;
        if (!is_zero_begin) b += c;
    }

    if (is_zero_begin)
        b = "0";
    
    if (a.size() < b.size()) swap(a, b);

    for (int i = a.size() - 1; i >= 0; i--) {
        int offset = a.size() - b.size();
        if (i - offset < 0) {
            if (carry == 1) {
                if (a[i] == '1')
                    v.push_back(0);
                else {
                    v.push_back(1);
                    carry = 0;
                }
                continue;
            }
            v.push_back(a[i]-'0');
            continue;
        }

        if (a[i] == '1' && b[i - offset] == '1') {
            if (carry == 0)
                v.push_back(0);
            else
                v.push_back(1);
            carry = 1;
        } else if (a[i] != b[i - offset]) {
            if (carry == 0)
                v.push_back(1);
            else {
                v.push_back(0);
                carry = 1;
            }
        } else {
            if (carry == 1)
                v.push_back(1);
            else
                v.push_back(0);
            carry = 0;
        }
    }
    if (carry == 1)
        v.push_back(1);
    for (int i = v.size() - 1; i >= 0; i--)
        cout << v[i];
    return 0;
}