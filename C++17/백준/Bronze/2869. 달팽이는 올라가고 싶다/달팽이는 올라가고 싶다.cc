#include <iostream>
using namespace std;

long long A, B, V;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	cin >> A >> B >> V;
	cout << (V - B - 1) / (A - B) + 1;
	return 0;
}