#include <iostream>
#include <vector>
using namespace std;

vector<int> v, ans;
void bt(int depth, int curr)
{
    if (depth == 6) {
        for (auto& e : ans)
            cout << e << " ";
        cout << "\n";
    }
    
    for (int i = curr; i < v.size(); i++) {
        ans.push_back(v[i]);
        bt(depth + 1, i + 1);
        ans.pop_back();
    }
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
    
    while (true) {
        v.clear();
        ans.clear();

        int k; cin >> k;

        if (k == 0)
            break;

        for (int i = 0; i < k; i++) {
            int X; cin >> X;
            v.push_back(X);
        }
        bt(0, 0);
        cout << "\n";
    }
	return 0;
}