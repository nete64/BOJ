#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int arr[52];
int ra[] = {5, 15, 30, 35, 45, 48, 50};
string s[] = {"A+", "A0", "B+", "B0", "C+", "C0", "F"};
bool cmp(int a, int b)
{
	return a > b;
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	for (int i = 0; i < 50; i++)
		cin >> arr[i];
	
	sort(arr, arr + 50, cmp);
	
	int k; cin >> k;
	int w;
	for (int i = 0; i < 50; i++)
		if (arr[i] == k) {
			w = i + 1;
			break;
		}
	
	for (int i = 0; i < 7; i++)
		if (w <= ra[i]) {
			cout << s[i];
			break;
		}

	return 0;
}