#include <iostream>
#include <string>
using namespace std;

int arr[27];
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	string S; cin >> S;
	for (auto& c : S)
		arr[c-'a']++;
	for (int i = 0; i < 26; i++)
		cout << arr[i] << " ";
	return 0;
}