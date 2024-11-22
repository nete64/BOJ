#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <unordered_map>
#include <algorithm>
using namespace std;
using ll = long long;

struct P {
    char c;
    ll r = 0, cnt = 0;
    int d = -1;
    bool z = false;
};
bool cmp(P& a, P& b)
{
    return a.r > b.r;
}
bool cmp2(P& a, P& b)
{
    return a.d > b.d;
}
string s[52];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    unordered_map<char, P> um;
    int N; cin >> N;
    size_t mxsz = 0;
    for (int i = 0; i < N; i++) {
        cin >> s[i];
        mxsz = max(mxsz, s[i].size());
    }

    for (int i = 0; i < N; i++) {
        string tmp = "";
        for (int j = 0; j < mxsz - s[i].size(); j++) {
            tmp += '0';
        }
        s[i] = tmp + s[i];
    }

    unordered_map<char, int> umz;
    for (int i = 0; i < N; i++) {
        bool isFirstDigit = true;
        for (int j = 0; j < s[i].size(); j++) {
            if(s[i][j] == '0') continue;
            if (um.count(s[i][j]) == 0)
                um[s[i][j]] = {s[i][j], 1000000000000, -1, false};
            if (isFirstDigit) {
                umz[s[i][j]]++;
                isFirstDigit = false;
            }
            um[s[i][j]].r += pow(10, mxsz - j - 1);
        }
    }

    vector<P> v;
    for (auto e : um)
        v.push_back(e.second);

    sort(v.begin(), v.end(), cmp);

    int mxi = 0;
    for (int i = 0; i < v.size(); i++) {
        v[i].d = 9 - i;
        if (umz.count(v[i].c) > 0)
            v[i].z = true;
        if (!v[i].z) mxi = max(mxi, i);
    }

    sort(v.begin(), v.end(), cmp2);

    if (v.size() == 10) {
        for (int i = v.size() - 1; i > mxi; i--) {
            swap(v[i].d, v[i - 1].d);
        }
    }

    unordered_map<char, int> um2;
    for (int i = 0; i < v.size(); i++)
        um2[v[i].c] = v[i].d;

    for (int i = 0; i < N; i++)
        for (int j = 0; j < s[i].size(); j++)
            s[i][j] = um2[s[i][j]] + '0';

    ll ans = 0;
    for (int i = 0; i < N; i++)
        ans += stoll(s[i]);

    cout << ans;
    return 0;
}