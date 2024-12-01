#include <iostream>
using namespace std;

int arr[10000002];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int N; cin >> N;
    for (int i = 0; i < N; i++) {
        int X; cin >> X;
        arr[X]++;
    }

    for (int i = 0; i < 10000002; i++)
        if (arr[i] >= 2) {
            cout << i;
            break;
        }
    return 0;
}