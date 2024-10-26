#include <iostream>
using namespace std;

int arr[6][6];
bool b[6][6];
bool check_row(int y)
{
	for (int i = 0; i < 5; i++)
		if (!b[i][y])
			return false;
	return true;
}
bool check_col(int x)
{
	for (int i = 0; i < 5; i++)
		if (!b[x][i])
			return false;
	return true;
}
bool check_dg1()
{
	for (int i = 0; i < 5; i++)
		if (!b[i][i])
			return false;
	return true;
}
bool check_dg2()
{
	for (int i = 0; i < 5; i++)
		if (!b[i][4 - i])
			return false;
	return true;
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);

	for (int i = 0; i < 5; i++)
		for (int j = 0; j < 5; j++)
			cin >> arr[i][j];
	
	for (int i = 0; i < 25; i++) {
		int X; cin >> X;
		for (int j = 0; j < 5; j++)
			for (int k = 0; k < 5; k++)
				if (arr[j][k] == X)
					b[j][k] = true;
		
		int cnt = 0;
		for (int j = 0; j < 5; j++) {
			cnt += check_row(j);
			cnt += check_col(j);
		}
		cnt += check_dg1();
		cnt += check_dg2();

		if (cnt >= 3) {
			cout << i + 1;
			return 0;
		}
	}
	return 0;
}