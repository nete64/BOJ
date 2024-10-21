#include <iostream>
#include <algorithm>
using namespace std;

int arr[3];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    cin >> arr[0] >> arr[1] >> arr[2];
    sort(arr, arr + 3);

    int dif = min(arr[1] - arr[0], arr[2] - arr[1]);
    if (arr[1] - arr[0] == dif && arr[2] - arr[1] == dif)
        cout << arr[2] + dif;
    else if (arr[1] - arr[0] == dif && arr[2] - arr[1] != dif)
        cout << arr[1] + dif;
    else if (arr[1] - arr[0] != dif && arr[2] - arr[1] == dif)
        cout << arr[0] + dif;
    return 0;
}