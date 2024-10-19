#include <iostream>
#include <algorithm>
using namespace std;

int arr[3];
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);

    int N; cin >> N;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N - i - 1; j++)
            cout << " ";
        for (int j = 0; j < 2 * i + 1; j++) {
            if (!(i == 0 || i == N - 1)) {
                if ((j == 0 || j == 2 * i))
                    cout << "*";
                else
                    cout << " ";
            }
            else
                cout << "*";
        }
        cout << "\n";
    }
	return 0;
}