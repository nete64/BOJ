#include <iostream>
using namespace std;

int arr[1002][1002];
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);

    int N, a, b; cin >> N >> a >> b;
    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++)
            cin >> arr[i][j];
    
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (i == a - 1 || j == b - 1) {
                if (arr[i][j] > arr[a - 1][b - 1]) {
                    cout << "ANGRY";
                    return 0;
                }
            }
        }
    }
    cout << "HAPPY";
	return 0;
}