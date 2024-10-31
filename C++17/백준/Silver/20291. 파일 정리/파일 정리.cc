#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>
#include <algorithm>
using namespace std;

struct P {
    string s;
    int n;
};
vector<P> v;
unordered_map<string, int> um;
bool cmp(P& a, P& b)
{
    return a.s < b.s;
}
string get_format(string& s)
{
    string ret = "";

    bool b = false;
    for (auto& e : s) {
        if (b) ret += e;
        if (e == '.') b = true;
    }
    return ret;
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
    
    int N; cin >> N;
    for (int i = 0; i < N; i++) {
        string s; cin >> s;
        um[get_format(s)]++;
    }

    for (auto& e : um)
        v.push_back({e.first, e.second});
    
    sort(v.begin(), v.end(), cmp);
    for (auto& e : v)
        cout << e.s << " " << e.n << "\n";
	return 0;
}