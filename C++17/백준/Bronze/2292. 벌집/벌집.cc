#include <iostream>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int N; cin >> N;
	int end = 1, add = 0, i = 0;
	while (true) {
		i++;
		if (N <= end) {
			cout << i;
			break;
		}
		add += 6;
		end += add;
	}

	return 0;
}