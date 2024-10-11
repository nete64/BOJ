#include <iostream>
using namespace std;

int arr[4];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    for (int i = 0; i < 4; i++)
        cin >> arr[i];

    if (arr[0] < arr[1] && arr[1] < arr[2] && arr[2] < arr[3])
        cout << "Fish Rising";
    else if (arr[0] > arr[1] && arr[1] > arr[2] && arr[2] > arr[3])
        cout << "Fish Diving";
    else if (arr[0] == arr[1] && arr[1] == arr[2] && arr[2] == arr[3] && arr[3] == arr[1])
        cout << "Fish At Constant Depth";
    else
        cout << "No Fish";
    return 0;
}