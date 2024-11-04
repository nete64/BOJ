#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
    
    int A, B, m; cin >> A >> B >> m;
    int n = 0;

    vector<int> v;
    for (int i = 0; i < m; i++) {
        int X; cin >> X;
        n += pow(A, m - i - 1) * X;
    }

    while (n > 0) {
        v.push_back(n % B);
        n /= B;
    }
    
    for (int i = v.size() - 1; i >= 0; i--)
        cout << v[i] << " ";
	return 0;
}