#include <iostream>
#include <algorithm>
using namespace std;

const int MAX = 1000002;
int arr[MAX];
bool cmp(int& a, int& b)
{
	return a > b;
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int N; cin >> N;
	for (int i = 0; i < N; i++)
		cin >> arr[i];

	sort(arr, arr + N, cmp);
	
	for (int i = 0; i < N; i++)
		cout << arr[i] << '\n';
	
	return 0;
}