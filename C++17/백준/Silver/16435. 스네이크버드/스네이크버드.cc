#include <iostream>
#include <algorithm>
using namespace std;

int arr[1002];
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int N, L; cin >> N >> L;
	for (int i = 0; i < N; i++)
		cin >> arr[i];
	
	sort(arr, arr + N);

	int curr = L;
	for (int i = 0; i < N; i++)
		if (curr >= arr[i])
			curr++;

	cout << curr;
	return 0;
}