#include <iostream>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int A, B, C; cin >> A >> B >> C;
	int D; cin >> D;

	int t = C + 60 * B + 3600 * A;
	t += D;
	cout << t / 3600 % 24 << " " << t % 3600 / 60 << " " << t % 60;	
	return 0;
}