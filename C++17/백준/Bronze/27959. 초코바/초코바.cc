#include <iostream>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
    
    int N, M; cin >> N >> M;
    if (100 * N >= M)
        cout << "Yes";
    else
        cout << "No";
	return 0;
}