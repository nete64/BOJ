#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);

    int L; cin >> L;
    cout.precision(10);
    cout << sqrt(3) * L * L / 4;
	return 0;
}