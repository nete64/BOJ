#include <iostream>
#include <string>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int n; cin >> n;
	while (n--) {
		int k; cin >> k;
		for (int i = 0; i < k; i++)
			cout << "=";
		cout << "\n";
	}
	return 0;
}