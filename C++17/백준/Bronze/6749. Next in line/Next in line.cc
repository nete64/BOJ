#include <iostream>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);

	int Y, M; cin >> Y >> M;
	cout << (M - Y) + M;
	return 0;
}