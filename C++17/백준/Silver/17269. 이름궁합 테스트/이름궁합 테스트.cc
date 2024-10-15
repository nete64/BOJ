#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int lookup[] = {3,2,1,2,4,3,1,3,1,1,3,1,3,2,1,2,2,2,1,2,1,1,1,2,2,1};
int arr[103][103];
vector<int> v, tmp;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int N, M; cin >> N >> M;
	string a, b; cin >> a >> b;

	int ia = 0, ib = 0;
	if (N < M) {
		while (ia < N) {
			v.push_back(lookup[a[ia] - 'A']);
			v.push_back(lookup[b[ib] - 'A']);
			ia++;
			ib++;
		}
		while (ib < M) {
			v.push_back(lookup[b[ib] - 'A']);
			ib++;
		}
	} else {
		while (ib < M) {
			v.push_back(lookup[a[ia] - 'A']);
			v.push_back(lookup[b[ib] - 'A']);
			ia++;
			ib++;
		}
		while (ia < N) {
			v.push_back(lookup[a[ia] - 'A']);
			ia++;
		}
	}
	
	while (true) {
		if (v.size() == 2)
			break;

		for (int i = 0; i < v.size() - 1; i++) {
			tmp.push_back((v[i] + v[i + 1]) % 10);
		}
		v = tmp;
		tmp.clear();
	}

	if (v[0] != 0)
		cout << v[0];

	cout << v[1] << "%";
	return 0;
}