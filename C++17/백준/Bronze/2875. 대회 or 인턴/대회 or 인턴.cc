#include <iostream>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);

    int N, M, K; cin >> N >> M >> K;
    while(K-- > 0) {
        if (N >= 2 * M)
            N--;
        else
            M--;
    }
    if (M == 0 || N <= 1)
        cout << "0";
    else if (N >= 2 * M)
        cout << M;
    else if (N < 2 * M)
        cout << N / 2;
	return 0;
}