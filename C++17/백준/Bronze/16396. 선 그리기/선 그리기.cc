#include <iostream>
using namespace std;

bool arr[10003];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int N; cin >> N;
    for (int i = 0; i < N; i++) {
        int a, b; cin >> a >> b;
        for (int j = a; j < b; j++)
            arr[j] = true;
    }

    int ans = 0;
    for (int i = 1; i <= 10000; i++)
        if (arr[i])
            ans++;
    cout << ans;
    return 0;
}