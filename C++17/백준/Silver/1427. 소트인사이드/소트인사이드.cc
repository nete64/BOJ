#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int arr[100];
bool cmp(int a, int b)
{
    return a > b;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int N; cin >> N;
    int index = 0;
    while (N > 0) {
        arr[index++] = N % 10;
        N /= 10;
    }

    sort(arr, arr + index, cmp);

    for (int i = 0; i < index; i++)
        cout << arr[i];
    
    return 0;
}