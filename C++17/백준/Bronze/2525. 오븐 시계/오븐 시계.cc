#include <iostream>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	
	int A, B, C; cin >> A >> B >> C;
	int t = 60 * A + B + C;
	cout << (t / 60) % 24 << " " << t % 60;
	
	return 0;
}