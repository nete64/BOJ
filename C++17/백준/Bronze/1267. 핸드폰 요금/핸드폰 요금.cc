#include <iostream>
using namespace std;

int a, b;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int N; cin >> N;
	for (int i = 0; i < N; i++) {
		int X; cin >> X;
		a += (X / 30 + 1) * 10;
		b += (X / 60 + 1) * 15;
	}
	if (a < b) cout << "Y " << a;
	else if (a > b) cout << "M " << b;
	else cout << "Y M " << a;
	
	return 0;
}