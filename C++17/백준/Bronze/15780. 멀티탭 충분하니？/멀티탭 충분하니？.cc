#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);

    int N, K; cin >> N >> K;
    int cnt = 0;
    for (int i = 0; i < K; i++) {
        int x; cin >> x;
        cnt += ceil(x / 2.0);
    }
    if (cnt >= N)
        cout << "YES";
    else
        cout << "NO";
	return 0;
}