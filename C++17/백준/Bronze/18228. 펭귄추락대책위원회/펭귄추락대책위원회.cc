#include <iostream>
#include <algorithm>
using namespace std;

int arr[200003], s;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int N; cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
        if (arr[i] == -1) s = i;
    }
    int l = 1e9, r = 1e9;
    for (int i = 0; i <= s - 1; i++)
        l = min(l, arr[i]);
    for (int i = s + 1; i < N; i++)
        r = min(r, arr[i]);
    cout << l + r;
    return 0;
}