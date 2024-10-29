#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

void rshift(string& s)
{
    for (int i = s.size() - 1; i > 0; i--)
        s[i] = s[i - 1];
    s[0] = '0';
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	string a, b; cin >> a >> b;
    if (a.size() < b.size()) swap(a, b);
    int absz = a.size() + b.size();
    string t(b.size(), '0');
    t += a;
    a = t;
    for (int i = 0; i < b.size(); i++) {
        a.push_back('0');
    }

    int sz = a.size() - b.size();
    for (int i = 0; i < sz; i++)
        b.push_back('0');

    int ans = absz;
    while (b.back() == '0') {
        bool chk1 = false;
        bool chk2 = true;
        int cnt = 0;
        for (int i = 0; i < a.size(); i++) {
            if (a[i] > '0' || b[i] > '0') {
                chk1 = true;
                cnt++;
            }

            if (a[i] == '2' && b[i] == '2') {
                chk2 = false;
                break;
            }
        }
        if (chk1 && chk2)
            ans = min(ans, cnt);
        rshift(b);
    }
    cout << ans;
	return 0;
}