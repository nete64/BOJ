#include <iostream>
#include <algorithm>
using namespace std;

const int MAX = 5000002;
int arr[MAX];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int N, K; cin >> N >> K;
    for (int i = 0; i < N; i++)
        cin >> arr[i];
    sort(arr, arr + N);
    cout << arr[K - 1];
    return 0;
}