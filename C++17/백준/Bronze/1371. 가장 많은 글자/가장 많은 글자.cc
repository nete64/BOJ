#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    vector<int> v(26, 0);
    string s;
    while (getline(cin, s)) {
        for (auto& c : s)
            if (isalpha(c))
                v[c-'a']++;
    }

    int mx = 0;
    for (auto& e : v)
        mx = max(mx, e);

    for (int i = 0; i < v.size(); i++)
        if (mx == v[i])
            cout << (char)(i + 'a');
    return 0;
}