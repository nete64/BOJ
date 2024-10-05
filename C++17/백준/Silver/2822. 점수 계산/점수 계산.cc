#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct P {
	int num, s;
};
bool cmp(P& a, P& b)
{
	return a.s < b.s;
}
P arr[10];
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	for (int i = 0; i < 8; i++) {
		cin >> arr[i].s;
		arr[i].num = i + 1;
	}

	sort(arr, arr + 8, cmp);

	int total = 0;
	for (int i = 3; i < 8; i++)
		total += arr[i].s;

	cout << total << "\n";

	vector<int> v;
	for (int i = 3; i < 8; i++)
		v.push_back(arr[i].num);

	sort(v.begin(), v.end());

	for (auto& e : v)
		cout << e << " ";
	return 0;
}