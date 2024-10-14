#include <iostream>
#include <string>
#include <vector>
using namespace std;

int arr[103];
string s[103];
vector<string> v;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	while (true) {
		int n; cin >> n;

		fill(arr, arr + n, 0);

		if (n == 0)
			break;

		cin.ignore();
		for (int i = 0; i < n; i++) {
			getline(cin, s[i]);
		}
		for (int i = 0; i < 2 * n - 1; i++) {
			int x; string a;
			cin >> x >> a;
			arr[x - 1]++;
		}
		for (int i = 0; i < n; i++) {
			if (arr[i] == 1)
				v.push_back(s[i]);
		}
	}
	
	for (int i = 0; i < v.size(); i++) {
		cout << i + 1 << " " << v[i] << "\n";
	}

	return 0;
}