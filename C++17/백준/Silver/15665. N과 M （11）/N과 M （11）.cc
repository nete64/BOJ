#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_set>
using namespace std;

int N, M;
vector<int> v, ans;
unordered_set<string> us;
void bt(int depth)
{
    if (depth == M) {
        string s = "";
        for (auto& e : ans)
            s += to_string(e);
        if (us.count(s) > 0)
            return;
        else
            us.insert(s);

        for (auto& e : ans)
            cout << e << " ";
        cout << "\n";
        return;
    }
    
    for (int i = 0; i < v.size(); i++) {
        ans.push_back(v[i]);
        bt(depth + 1);
        ans.pop_back();
    }
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
    
    cin >> N >> M;
    for (int i = 0; i < N; i++) {
        int X; cin >> X;
        v.push_back(X);
    }
    sort(v.begin(), v.end());
    bt(0);
	return 0;
}