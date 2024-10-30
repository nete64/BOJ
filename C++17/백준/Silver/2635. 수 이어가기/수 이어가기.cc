#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> v[30001];
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
    
    int N; cin >> N;
    for (int i = 1; i <= N; i++) {
        v[i].push_back(N);
        v[i].push_back(i);

        int X = N - i;
        while (X >= 0) {
            v[i].push_back(X);
            X = v[i][v[i].size()-2] - v[i][v[i].size()-1];
        }
    }

    int mxi = 0, mxs = 0;
    for (int i = 1; i <= N; i++) {
        if (mxs < v[i].size()) {
            mxs = v[i].size();
            mxi = i;
        }
    }
    cout << mxs << "\n";
    for (auto& e : v[mxi])
        cout << e << " ";
	return 0;
}