#include <iostream>
using namespace std;

int arr[100002];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int N; cin >> N;
    for (int i = 0; i < N; i++) {
        int X; cin >> X;
        arr[i + 1] = arr[i] + X;
    }
    int M; cin >> M;
    for (int i = 0; i < M; i++) {
        int a, b; cin >> a >> b;
        cout << arr[b] - arr[a - 1] << "\n";
    }
    return 0;
}