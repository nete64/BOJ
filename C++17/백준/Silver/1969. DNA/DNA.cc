#include <iostream>
#include <string>
using namespace std;

int arr[4][52];
string s[1002];
char t[] = { 'A','C','G','T' };
int f(char c)
{
	if (c == 'A') return 0;
	else if (c == 'C') return 1;
	else if (c == 'G') return 2;
	else if (c == 'T') return 3;
	return -1;
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int N, M; cin >> N >> M;
	for (int i = 0; i < N; i++)
		cin >> s[i];
	
	for (int i = 0; i < M; i++) {
		for (int j = 0; j < N; j++) {
			arr[f(s[j][i])][i]++;
		}
	}

	int hd = 0;
	for (int i = 0; i < M; i++) {
		int cnt = -1;
		int index = -1;
		for (int j = 0; j < 4; j++) {
			if (cnt < arr[j][i]) {
				cnt = arr[j][i];
				index = j;
			}
		}
		for (int j = 0; j < 4; j++) {
			if (j == index) continue;
			hd += arr[j][i];
		}
		cout << t[index];
	}
	cout << "\n" << hd;
	return 0;
}