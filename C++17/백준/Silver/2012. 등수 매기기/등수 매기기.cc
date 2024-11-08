#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int arr[500002];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int N; cin >> N;
    for (int i = 0; i < N; i++)
        cin >> arr[i];

    sort(arr, arr + N);

    long long ans = 0;
    for (int i = 0; i < N; i++)
        ans += abs(i + 1 - arr[i]);
    cout << ans;
}