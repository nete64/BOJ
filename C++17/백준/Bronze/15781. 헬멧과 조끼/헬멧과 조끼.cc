#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);

    int N, M; cin >> N >> M;
    int a = 0, b = 0;
    for (int i = 0; i < N; i++) {
        int x; cin >> x;
        a = max(a, x);
    }
    for (int i = 0; i < M; i++) {
        int x; cin >> x;
        b = max(b, x);
    }
    cout << a + b;
	return 0;
}