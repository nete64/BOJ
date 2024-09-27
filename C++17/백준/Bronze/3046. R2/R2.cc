#include <iostream>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int R1, S; cin >> R1 >> S;
	cout << 2 * S - R1;
	
	return 0;
}