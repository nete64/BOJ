#include <iostream>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int N; cin >> N;
	if (N == 1)
		cout << "B";
	else
		cout << "A";
	return 0;
}