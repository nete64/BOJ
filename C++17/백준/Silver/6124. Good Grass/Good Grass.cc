#include <iostream>
using namespace std;

int arr[105][105];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int NR, NC; cin >> NR >> NC;
    for (int i = 0; i < NR; i++)
        for (int j = 0; j < NC; j++)
            cin >> arr[i][j];

    int mx = 0, mi = 0, mj = 0;
    for (int i = 0; i < NR - 2; i++) {
        for (int j = 0; j < NC - 2; j++) {
            int sum = 0;
            
            for (int k = 0; k < 3; k++)
                for (int l = 0; l < 3; l++)
                    sum += arr[i + k][j + l];

            if (mx < sum) {
                mx = sum;
                mi = i + 1;
                mj = j + 1;
            }
        }
    }
    cout << mx << "\n" << mi << " " << mj;
    return 0;
}