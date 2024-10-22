#include <iostream>
using namespace std;

int arr[9];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int sum = 0;
    for (int i = 0; i < 9; i++) {
        cin >> arr[i];
        sum += arr[i];
    }
    
    int a, b;
    for (int i = 0; i < 8; i++) {
        for (int j = i + 1; j < 9; j++) {
            if (sum - arr[i] - arr[j] == 100) {
                a = i;
                b = j;
            }
        }
    }
    for (int i = 0; i < 9; i++) {
        if (i == a || i == b)
            continue;
        cout << arr[i] << "\n";
    }
    return 0;
}