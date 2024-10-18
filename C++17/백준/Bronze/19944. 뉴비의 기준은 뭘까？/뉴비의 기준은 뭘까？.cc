#include <iostream>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int N, M; cin >> N >> M;
	if (M == 1 || M == 2)
		cout << "NEWBIE!";
	else if (M <= N)
		cout << "OLDBIE!";
	else
		cout << "TLE!";
	return 0;
}