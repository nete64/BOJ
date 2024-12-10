#include <iostream>
#include <algorithm>
using namespace std;

int arr[100002];
int main()
{
    int N, L, R; cin >> N >> L >> R;
    for (int i = 1; i <= N; i++)
        cin >> arr[i];
        
    sort(arr + L, arr + R + 1);

    for (int i = 1; i < N; i++) {
        if (arr[i] > arr[i + 1]) {
            cout << "0";
            return 0;
        }
    }
    cout << "1";
    return 0;
}